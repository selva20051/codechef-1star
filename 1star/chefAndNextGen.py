t = int(input())
i = 0

while(i<t):
    a,b,x,y = map(int,input().split())
    unit = a*b
    power = x*y
    if(power>=unit):
        print("YES")
    else:
        print("NO")
    i+=1