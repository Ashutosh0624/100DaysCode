def factorial_n(n):
    if n == 0:
        return 1
    if n == 1:
        return 1
    return n * factorial_n(n-1)

n = int(input("enter the number"))
res = factorial_n(n)
print(f"factorial of {n} : {res} ")
