def KMPSearch(txt):
    M = 3
    N = len(txt)
    pat1 = "map"
    pat2 = "pie"
    lps = [0, 0, 0]
    j = 0
    ans = 0
    i = 0 
    while i < N:
        if pat1[j] == txt[i] or pat2[j] == txt[i]:
            i += 1
            j += 1
 
        if j == M:
            ans += 1
            j = lps[j-1]
        elif i < N and (pat1[j] != txt[i] and pat2[j] != txt[i]):
            if j != 0:
                j = lps[j-1]
            else:
                i += 1
    return ans
 
if __name__ == "__main__":
    n = int(input())
    for i in range(n):
        k = int(input())
        txt = input()
        print(KMPSearch(txt))