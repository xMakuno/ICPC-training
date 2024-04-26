# Link: https://codeforces.com/contest/1945/problem/A
def ac(): # 92ms
    n = int(input())
    for i in range(n):
        a, b, c = [int(x) for x in input().split()]
        tents = 0
        tents += a
        temp = b % 3
        if temp == 0:
            tents += b//3 + c// 3
            if c % 3 != 0:
                tents += 1
        else:
            tents += b//3
            if c >= 3 - temp:
                tents += (c+temp)//3
                if (c + temp) % 3 != 0:
                    tents += 1
            else:
                tents = -1
        print(tents)
    

if __name__ == "__main__":
    ac()