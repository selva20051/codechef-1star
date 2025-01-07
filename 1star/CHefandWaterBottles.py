t = int(input())
for _ in range(t):
    n,x,k = map(int,input().split())
    possible = k//x
    if(possible<=n):
        print(possible)
    else:
        print(n)