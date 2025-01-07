t = int(input())
for _ in range(t):
    x,y,z = map(int,input().split())
    speed = y//x
    time = z-speed
    if(time<0):
        print(0)
    else:
        print(time)