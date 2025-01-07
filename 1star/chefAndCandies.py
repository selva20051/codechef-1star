import math
t = int(input())
i = 0

while(i<t):
    n,x = map(int,input().split())
    if(n>x):
        candy = n-x
        packets = math.ceil(candy/4)
        print(packets)
    i+=1