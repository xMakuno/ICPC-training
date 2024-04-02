import random
""" alphabet = [chr(num + 97) for num in range(26)]
print(alphabet) """
def gaussFormula(n):
    return int(((n)*(n+1))/2)

def TLE():
    s = input()
    n = int(input())
    ans = 0
    for i in range(len(s)):
        actualInversions = 0
        virtualInversions = 0
        for j in range(len(s)-1,i,-1):
            if j == i:
                break
            else:
                if s[i] > s[j]:
                    actualInversions += 1
                elif s[i] < s[j]:
                    virtualInversions += 1
                else:
                    continue
        # print(f'A: {actualInversions} V: {virtualInversions}')
        ans = ans + actualInversions*gaussFormula(n)+ virtualInversions*gaussFormula(n-1)
    print(ans % (10**9 + 7))

def charIndex(c):
    return ord(c) - 97

def indexToChar(pos):
    return chr(pos + 97)

def solve2():
    s = [charIndex(x) for x in input()]
    n = int(input())
    print(s)

if __name__ == "__main__":
    # TLE()
    solve2()
