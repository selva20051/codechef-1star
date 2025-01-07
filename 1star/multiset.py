# cook your dish here
A=list(int(input()))
k=int(input())

def multiset(A,k):
    A.sort()
    
    for i in range (0,k):
        if(i != k):
            min = A[0]
            max = A[len(A)-1]
            sum = min+max
            A.pop(0)
            A.pop()
            A.append(sum)
            A.sort()
    print(A)

A1=[1,1,2,3]
A2=[1,1,2,3]
A3=[1,10,100]
A4=[2,5,12,13,14,19,20]
A5=[6,6,6,6]

print(multiset(A1,1))
print(multiset(A2,2))
print(multiset(A3,2))
print(multiset(A4,4))
print(multiset(A5,2))