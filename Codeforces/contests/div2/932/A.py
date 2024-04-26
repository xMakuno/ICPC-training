# Link: https://codeforces.com/contest/1935/problem/A
import string

def solve():
    num = input()
    word = input()

    if(word == word[::-1]):
        print(word)

    for i in range(len(word)):
        first = string.ascii_lowercase.index(word[i])
        last = string.ascii_lowercase.index(word[-1*(i+1)])

        if(first < last):
            print(word)
            break
        elif(last < first):
            word = word[::-1] + word
            print(word)
            break
        
if __name__ == "__main__":
    cases = int(input())
    for i in range(cases):
        solve()