prime = [True]*(10**7+5)
real = []
p = 2
while (p * p <= 10**7+5):
    if (prime[p] == True):
        real.append(p)
        for i in range(p * p, 10**7+5+1, p):
            
            prime[i] = False
    p += 1

""" t = int(input())
while t:
    t-=1
    n = int(input()) """
    