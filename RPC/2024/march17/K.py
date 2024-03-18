vowels = ['A','E','I','O','U','Y']        

def solve():
    n = int(input())
    if n <= 2:
        print(n)
    else:
        acronym = ""
        megaList = []
        for i in range(n):
            temp = ['1' if x in vowels else '0' for x in [*input()]]
            megaList.append(temp)
            acronym += temp[0]
        print(megaList)
        print(acronym)

if __name__ == "__main__":
    # solve()
    print(1)

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