t = int(input())
for _ in range(t):
    n,x = map(int,input().split())
    if(n==x or x==0):
        print(0)
    else:
        print(min((n-x),x))