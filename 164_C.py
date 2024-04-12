def maximize_product(a, b):
    n = len(a)
    a1, b1 = "", ""

    for i in range(n):
        if a[i] == b[i]:
            a1 += a[i]
            b1 += a[i]
        else:
            b1 += min(a[i], b[i])
            a1 += max(a[i], b[i])
            break

    for i in range(len(a1), n):
        a1 += min(a[i], b[i])
        b1 += max(a[i], b[i])

    print(a1)
    print(b1)

t = int(input())

for _ in range(t):
    a = input().strip()
    b = input().strip()
    maximize_product(a, b)