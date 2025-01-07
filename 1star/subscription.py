t = int(input())
i = 0


while(i<t):
    n,x = map(int,input().split())
    j=6
    grp=1
    while(True):
        if(n<=j):
            print(grp*x)
            break
        else:
            j+=6
            grp+=1
    i+=1 