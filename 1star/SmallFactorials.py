t = int(input())
for _ in range(t):
    n = int(input())
    product = 1
    for i in range(1,n+1):
        product *= i
    print(product)