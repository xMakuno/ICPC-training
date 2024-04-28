vowels = ['A','E','I','O','U','Y']
def KMPSearch(txt):
    pat = "CCC"
    M = 3
    N = len(txt)
    lps = [0,1,2]
    j = 0
    i = 0
    unp = []
    while i < N:
        if pat[j] == txt[i]:
            i += 1
            j += 1
        if j == M:
            unp.append(i-j)
            j = lps[j-1]
        elif i < N and pat[j] != txt[i]:
            if j != 0:
                j = lps[j-1]
            else:
                i += 1
    return unp

def solve():
    n = int(input())
    if n <= 2:
        print(n)
    else:
        acronym = ""
        megaList = []
        for i in range(n):
            temp = ['V' if x in vowels else 'C' for x in [*input()]]
            if len(temp) >= 3:
                temp = temp[:3]
            # print(f'Temp: {temp}')
            megaList.append(temp)
            acronym += temp[0]
        indexes = KMPSearch(acronym)
if __name__ == "__main__":
    solve()

'''
3
KNUTH
MORRIS
PRATT
3
KNUTH
M
PRATT
3
K
M
P
2
K
M
4
YOU
SHOULD
BE
DANCING
'''