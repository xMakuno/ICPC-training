T = int(input())
while T:
    T-=1
    n = input() # 123456
    mod = len(n) % 3
    L = []
    if mod > 0:
        L.append(int(n[0:mod]))
        n = n[mod::]
    while(n != ""):
        hi = n[:3]
        L.append(int(hi))
        n = n[3::]
    counter = 1
    sum = 0
    for i in reversed(L):
        sum += i*counter
        counter = counter^1^-1
    if(sum % 13 == 0):
        print(abs(sum), "YES")
    else:
        print(abs(sum), "NO")