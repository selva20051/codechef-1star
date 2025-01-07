import math

t = int(input())
for _ in range(t):
    x,y = map(int,input().split())
    if(x>=y):
        print(0)
    else:
        require = y-x
        print(math.ceil(require/8))