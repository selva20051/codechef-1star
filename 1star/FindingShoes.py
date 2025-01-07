t = int(input())
for _ in range(t):
    n,stock = map(int,input().split())
    require = n*2
    if(stock==0):
        print(require)
    else:
        if(n<=stock):
            print(n)
        else:
            print(((n-stock)*2)+(stock))