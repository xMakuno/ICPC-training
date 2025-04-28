def solve(l):
    finger = 0
    m_op = 0
    for a_i in l:
        m_op+=a_i[1]
        if a_i[0] != finger:
            finger=finger^0^1
            m_op+=1
    return m_op

t=int(input())
while t:
    t-=1
    n = int(input())
    s = input()
    l = []
    last = s[0]
    cnt = 1
    for i in range(1,n):
        if s[i] == last:
            cnt+=1
        else:
            l.append([int(last),cnt])
            last = s[i]
            cnt=1
    l.append([int(last), cnt])
    # print(l)
    ans = solve(l)
    if l[0][0] == 1:
        if len(l) == 2:
            ans-=1
        elif len(l) > 2:
            ans-=2
    else:
        if len(l) == 3:
            ans-=1
        elif len(l) > 3:
            ans-=2
    print(ans)

