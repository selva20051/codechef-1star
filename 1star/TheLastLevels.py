t = int(input())
for _ in range(t):
    x,y,z = map(int,input().split())
    
    if(x>3):
        if(x%3!=0):
            breakTime = x//3
            print((x*y)+(z*breakTime))
        else:
            breakTime = x//3
            print((x*y)+(z*(breakTime-1)))
    else:
        print((x*y))