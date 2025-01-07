t = int(input())
m = 0

while(m<t):
    profit = list(map(int,input().split()))
    result =  []
    count = 0
    for i in range(0,len(profit)):
        sums = 0
        for j in range(0,len(profit)):
            if(i!=j):
                sums+=profit[j]
        if(profit[i]>sums):
            count+=1
    if(count>=1):
        print("YES")
    else:
        print("NO")
    m+=1