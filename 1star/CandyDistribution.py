t = int(input())
for _ in range(t):
    n,m = map(int,input().split())
    candy = n/m
    if(candy%2==0):
        print("yes")
    else:
        print("No")