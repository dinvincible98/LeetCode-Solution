def factorial(n):
    while n>0:
        res = n*factorial(n-1)
    return res
factorial(3)