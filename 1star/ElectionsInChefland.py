t = int(input())
for _ in range(t):
    n,x = map(int,input().split())
    age = list(map(int,input().split()))
    count = 0
    for i in range(0,len(age)):
        if(age[i]>=x):
            count+=1
    print(count)