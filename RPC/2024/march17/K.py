vowels = ['A','E','I','O','U','Y']
def KMPSearch(pat, txt):
    M = len(pat)
    N = len(txt)
    lps = [0]*M
    j = 0
    computeLPSArray(pat, M, lps)
    i = 0
    print(lps)
    while i < N:
        if pat[j] == txt[i]:
            i += 1
            j += 1
        if j == M:
            print ("Found pattern at index", str(i-j))
            j = lps[j-1]
        elif i < N and pat[j] != txt[i]:
            if j != 0:
                j = lps[j-1]
            else:
                i += 1
 
def computeLPSArray(pat, M, lps):
    len = 0
    lps[0]
    i = 1
    while i < M:
        if pat[i]== pat[len]:
            len += 1
            lps[i] = len
            i += 1
        else:
            if len != 0:
                len = lps[len-1]
            else:
                lps[i] = 0
                i += 1

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
            print(f'Temp: {temp}')
            megaList.append(temp)
            acronym += temp[0]
        KMPSearch("CCC", acronym)
        
        

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