def func(n,s):
    sum = 0
    odds = 0
    first = n
    last = -1
    for i in range(n):
        thing = int(s[i])
        sum += thing
        if (thing&1):
            odds+=1
            first = min(first, i)
            last = max(last, i)
    if not (sum % 2) and (int(s)&1):
        print(s)
    else:
        if odds >= 1 and first != last:
            print(s[first] + s[last])
        else:
            print(-1)
t = int(input())
while t:
    t-=1
    n = int(input())
    s = input()
    func (n,s)