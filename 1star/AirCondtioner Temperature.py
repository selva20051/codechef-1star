t = int(input())
i = 0

while(i<t):
    a,b,c = map(int,input().split())
    if(a<=b and c<=b):
        print("Yes")
    else:
        print("No")
    i+=1