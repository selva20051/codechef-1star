t = int(input())
for _ in range(t):
    n,x = map(int,input().split())
    if(n>x):
        print("NO")
    elif(x%n==0):
        print("YES")
    else:
        print("NO")