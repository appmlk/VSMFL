# coding=utf-8
def minEditDistance(A, B):
    len_A = len(A)
    len_B = len(B)
    D = [[0] * (len_A + 1) for i in range(len_B + 1)]
    Path = [[[]] * (len_A + 1) for i in range(len_B + 1)]
    D[0][0] = 0
    Path[0][0] = []
    for i in range(1, len_A + 1):
        D[0][i] = i
        Path[0][i] = []
        for k in range(i):
            Path[0][i].append({"op": "del", "pos": k + 1, "target": A[k]})

    for i in range(1, len_B + 1):
        D[i][0] = i
        Path[i][0] = []
        for k in range(i):
            Path[i][0].append({"op": "add", "pos": k, "target": B[k]})

    for i in range(1, len_B + 1):
        for j in range(1, len_A + 1):
            x = D[i - 1][j] + 1
            y = D[i][j - 1] + 1
            z = D[i - 1][j - 1] if A[j - 1] == B[i - 1] else D[i - 1][j - 1] + 1
            D[i][j] = min(min(x, y), z)

            # if D[i][j] >= tempminstep:
            #     return {"step": tempminstep}

            if min(x, y) > z:
                Path[i][j] = Path[i - 1][j - 1][:]
                if A[j - 1] != B[i - 1]:
                    Path[i][j].append(
                        {"op": "modify", "pos": j, "target": A[j - 1] + "->" + B[i - 1]})
            else:
                if x > y:
                    Path[i][j] = Path[i][j - 1][:]
                    Path[i][j].append(
                        {"op": "del", "pos": j, "target": A[j - 1]})
                else:
                    Path[i][j] = Path[i - 1][j][:]
                    Path[i][j].append(
                        {"op": "add", "pos": j, "target": B[i - 1]})

    # print(D[len_B][len_A])
    # print(Path[len_B][len_A])
    return {"step": D[len_B][len_A], "path": Path[len_B][len_A]}


if __name__ == '__main__':
    a = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '10', '11', '12', '13', '14', '15', '16', '17', '18', '19',
         '5',
         '6', '20', '21', '22', '23', '24', '30', '14', '4', '15', '31', '31', '31', '31',
         '18']
    b = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '10', '11', '12', '13', '14', '15', '16', '17', '18', '19',
         '5', '6', '20', '21', '22', '23', '24', '25', '26', '27', '28', '29', '30', '14', '4', '15', '31', '31', '31',
         '31', '18']
    print(minEditDistance(a, b))
