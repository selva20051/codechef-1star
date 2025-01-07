t = int(input())
for _ in range(t):
    num = int(input())
    if(num<=10):
        print("Lower Double")
    elif(num>=11 and num<=15):
        print("Lower Single")
    elif(num>=16 and num<=25):
        print("Upper Double")
    else:
        print("Upper Single")