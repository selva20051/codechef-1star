t = int(input())
for _ in range(t):
    time = list(map(int,input().split()))
    time.sort(reverse=True)
    print(time[0]-time[1])