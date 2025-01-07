# cook your dish here
t = int(input())
i = 0

while(i<t):
    x = int(input())
    if(x<=100):
        print(x)
    elif(100<x and x<= 1000):
        print(x-25)
    elif(1000<x and x<=5000):
        print(x-100)
    else:
        print(x-500)    
    i+=1