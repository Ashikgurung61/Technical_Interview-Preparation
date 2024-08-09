def rectangle(m,n):
    for row in range(m):
        if row == 0 or row == m - 1:
            print("*" * n)
        else:
            print("*" + " " * (n - 2) + "*")


rectangle(4,6)
