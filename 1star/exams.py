t = int(input())
i=0

while(i<t):
    x,y,z = map(int,input().split())
    total = x*y
    passPercent = (z/total)*100
    if(passPercent>50):
        print("Yes")
    else:
        print("No")
    i+=1