t = int(input())
for _ in range(t):
    n,x,y = map(int,input().split())
    if(y%x == 0):
        print("YEs")
    else:
        print("No")


