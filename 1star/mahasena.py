n1 = int(input())
n2 = list(map(int,input().split()))
oddCount = 0
evenCount = 0
for i in range(0,n1):
    if(n2[i]%2==0):
        evenCount+=1
    else:
        oddCount+=1
if(evenCount>oddCount):
    print("READY FOR BATTLE")
else:
    print("NOT READY")
