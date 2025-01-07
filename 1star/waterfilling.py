t = int(input())
i = 0

while(i<t):
    b1,b2,b3 = map(int,input().split())
    bottle=[b1,b2,b3]
    count = bottle.count(0)
    if(count>=2):
        print("Water filling time")
    else:
        print("Not now")
    i+=1