t = int(input())
i = 0

while(i<t):
    x,y=map(int,input().split())
    if(x==y):
        print("SAME")
    elif(x>y):
        print("CAR")
    else:
        print("BIKE")
    i+=1