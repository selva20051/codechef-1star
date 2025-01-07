t = int(input())
i = 0

while(i<t):
    r1,r2,r3,r4 = map(int,input().split())
    limit = [r1,r2,r3,r4]
    if(limit.count(0)==4):
        print("IN")
    else:
        print("OUT")
    i+=1