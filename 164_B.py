t = int(input())

for _ in range(t):
    n = int(input())
    v = list(map(int, input().split()))

    r = 1
    res = n
    s = v[0]
    for i in range(n - 1):
        if v[i] == v[i + 1]:
            r += 1
        elif v[i + 1] != s:
            res = min(res, r)
            r = 1
            s = v[i]

    res = min(res, r)

    if res == n:
        print(-1)
    else:
        print(res)