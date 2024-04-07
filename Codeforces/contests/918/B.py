'''
Site: Codeforces
Contest: Codeforces Round 918 Div 2
Link: https://codeforces.com/contest/1915
Problem: B
Topic: bitmasks, brute force, implementation
Elo: 800
'''
def bitmask():
    idx = -1
    i = 3
    temp = ''
    while i:
        # print('puta')
        i-=1
        if idx == -1:
            temp = input()
            idx = temp.find('?')
        else:
            input()
    # print(idx)
    flag = 0
    for n in range(3):
        if n != idx:
            flag ^= ord(temp[n])
    if flag == 1:
        return 'A'
    elif flag == 2:
        return 'B'
    else:
        return 'C'


if __name__ == "__main__":
    t = int(input())
    while t:
        t-=1
        print(bitmask())