T = int(input())
a,b,c = map(int,input().split())

avg = (a+b)/2
if(avg>c):
    print("YES")
else:
    print("No")