t=int(input())
while t:
    t-=1
    n=int(input())
    s=input()
    cntr = dict()
    indices = [[] for _ in range(26)]
    for i in range(n):
        indices[ord(s[i])-97].append(i+1)
    # print(cntr)
    indices.sort(key=lambda x:len(x))
    if indices[-2] == []:
        print(s)
    else:
        print(s[:])
    print(indices)