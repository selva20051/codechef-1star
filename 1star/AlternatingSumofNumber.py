t = int(input())
i = 0

while(i<t):
    sums = 0
    n=int(input())
    a = list(map(int,input().split()))
    if(n%2!=0):
        a.append(0)
    for j in range(0,n,2):
        sums += a[j] - a[j+1]   
    print(sums)
    i+=1