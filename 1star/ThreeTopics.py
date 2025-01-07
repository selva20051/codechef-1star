a,b,c,x = map(int,input().split())
topic = [a,b,c]
count = 0
for i in topic:
    if(i==x):
        count+=1
if(count>=1):
    print("Yes")
else:
    print("No")