t = int(input())
z=0

while(z<t):
    n = int(input())
    rating = list(map(int,input().split()))
    count = 0
    for i in rating:
        if(i>=1000):
            count+=1
    print(count)
    z+=1