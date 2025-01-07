t = int(input())
i = 0

while(i<t):
    x,y = map(int,input().split())
    approval = (y/x)*100
    if(approval>=50):
        print("YES")
    else:
        print("NO")
    i+=1