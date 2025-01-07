def alpha(s:str,):
    numbers = []
    alphabet = {chr(i): i - 96 for i in range(97, 123)}

    for i in range(0,len(s)):
        curr= s[i]
        num = alphabet[curr]
        numbers.append(num)
    
    Sum = sum(numbers)

    s = str(Sum)
    num = 0
    for i in range(0,len(s)):
        num = num + int(s[i]) 
    print(num)
alpha("iiii")