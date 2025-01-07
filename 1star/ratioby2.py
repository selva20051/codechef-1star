def ratio(x,y):
    count = 0
    while(True):
        if(x>=(2*y)):
            return count
        elif(y>=(2*x)):
            return count
        x +=1
        y -=1
        count += 1

print(ratio(2,4))
print(ratio(4,4))
print(ratio(3,5))
print(ratio(10,6))
print(ratio(8,7))
print(ratio(2,7))