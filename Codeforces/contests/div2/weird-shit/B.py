t=int(input())
while t:
    t-=1
    n = int(input())
    s = input()
    ts = set(s)
    if ">" not in ts or "<" not in ts:
        print(n)
    else:
        thing = set({})
        for i in range(n):
            if s[i] == "-":
                thing.add(i)
                thing.add((i+1)%n)
        print(len(thing))