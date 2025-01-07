t = int(input())
i = 0

while(i<t):
    a,b = map(int,input().split())
    c,d = map(int,input().split())
    g1 = c-a
    g2 = d-b
    if(g1>=0 and g2 >=0):
        print("POSSIBLE")
    else:
        print("IMPOSSIBLE")
    i+=1