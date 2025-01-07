t = int(input())
z = 0

while(z<t):
    a,b = map(int,input().split())
    offer1 = (100/10)*a
    offer2 = (100/20)*b
    if(offer1==offer2):
        print("ANY")
    elif(offer1>offer2):
        print("FIRST")
    else:
        print("SECOND")
    z+=1