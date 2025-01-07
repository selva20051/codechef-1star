t = int(input())
for _ in range(t):
    x,a,b = map(int,input().split())
    total = a+(b*2)
    if(total>=x):
        print("Qualify")
    else:
        print("NotQualify")