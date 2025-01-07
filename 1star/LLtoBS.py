def sortedListToBST(head):
    mid = ((len(head)-1)//2)
    bs = []

    bs.append(head[mid])
    for i in range(1,mid+1):
        bs.append(head[mid-i])S
        bs.append(head[(len(head))-i])

    if((len(head)%2!=0)):
        bs.insert(-1,None)
    return bs
        

head1 = []
print(sortedListToBST(head1))


#INCOMPLETE HAVE TO DO IN LL AND BS 