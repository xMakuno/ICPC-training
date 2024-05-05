'''
Problem: B
'''
def solve():
    o, a, k = map(int, input().split())
    i = 1
    curr = i*a
    while i*a < o:
        if (o - curr) % k == 0:
            return 1
        else:
            i+=1
        curr = i*a
    return 0

if __name__ == "__main__":
    print(solve())