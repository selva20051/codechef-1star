# cook your dish here
t = int(input())
i = 0

while(i<t):
    x,y = map(int,input().split())
    wallet = x*y
    bag = wallet//100
    print(bag)
    i+=1