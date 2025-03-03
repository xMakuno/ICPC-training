n, m = map(int, input().split())
lanterns = []
active = 0
inactive = 0
dead = 0
sum = 0
for i in range(n):
    s, p = map(int, input().split())
    if s == 1:
        active+=1
    elif s == 0:
        inactive +=1
    elif s == -1:
        dead+=1
    lanterns.append(s)
    sum+=p
# print(active, inactive, dead)
for i in range(m):
    action = list(input().split())
    
    if action[0] == "W":
        for j in range(int(action[1]),int(action[2])+1):
            if lanterns[j] == 1:
                lanterns[j] = 0
                inactive+=1
                active-=1
            elif lanterns[j] == 0:
                lanterns[j] = 1
                inactive-=1
                active+=1
    elif action[0] == "C":
        sum += int(action[1])*active
    # print(sum)
print(sum)
