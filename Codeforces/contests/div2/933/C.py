# Link: https://codeforces.com/contest/1941/problem/C

def ac2(): # 164ms
    for _  in range(int(input())):
        input()
        txt = input()
        print(txt.count("map") + txt.count("pie") - txt.count("mapie"))

def KMPSearch(pat, txt):
    M = len(pat)
    N = len(txt)
    lps = [0]*M
    j = 0
    computeLPSArray(pat, M, lps)
    i = 0
    times = 0
    while i < N:
        if pat[j] == txt[i]:
            i += 1
            j += 1
 
        if j == M:
            times += 1
            j = lps[j-1]
 
        elif i < N and pat[j] != txt[i]:
            if j != 0:
                j = lps[j-1]
            else:
                i += 1
    return times
 
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
 
def ac(): # 655ms
    n = int(input())
    for i in range(n):
        k = int(input())
        txt = input()
        ans = 0
        ans += KMPSearch("map",txt)
        ans += KMPSearch("pie",txt)
        ans -= KMPSearch("mapie",txt)
        print(ans)

if __name__ == "__main__":
    # ac()
    ac2()