if __name__ == "__main__":
    n, k = map(int, input().split())
    thing = [i*5 for i in range(1,n+1)]
    time = 240 - k
    ans = []
    for i in range(len(thing)):
        if i !=0:
            thing[i] += thing[i-1]
    for i in range(len(thing)):
        if thing[i] > time:
            ans.append(i)

            break
    if not ans:
        print(n)
    else:
        print(ans[0])