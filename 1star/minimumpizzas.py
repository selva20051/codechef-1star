import math

t = int(input())
i = 0

while(i<t):
    n,x = map(int,input().split())
    slice = n*x
    pizza = math.ceil(slice/4)
    print(pizza)
    i+=1