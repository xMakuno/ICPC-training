'''
Site: Codeforces
Contest: Codeforces Round 937 Div 4
Link: https://codeforces.com/contest/1950
Problem: D
Topic: brute force, dp, implementation, number theory
Elo: 1100
'''
if __name__ == "__main__": # solution in python
    numbas = []
    for i in range(2,100_000+1):
        c = i
        flag = False
        while c > 0:
            if(c%10>1):
                flag = True
            c = c//10
        if not flag: numbas.append(i)
    # t = 1
    t = int(input())
    while t:
        t-=1
        n = int(input())
        for k in range(len(numbas)-1,-1,-1):
            while n % numbas[k] == 0:
                n = n // numbas[k]
        if n == 1:
            print("YES")
        else:
            print("NO")