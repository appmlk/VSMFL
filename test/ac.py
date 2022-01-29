n = int(input())
ans = 1
for i in range(n):
    ans = ans * n % 100
print(ans)