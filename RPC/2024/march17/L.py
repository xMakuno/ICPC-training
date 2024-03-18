def solve():
    r, c, k = [int(x) for x in input().split(" ")]
    # print(f'r: {r} c: {c} k: {k}')
    for i in range(r):
        m, p = [x for x in input().split(" ")]
        # print(f'm: {m} p: {p}')
        if '*' in p:
            # print("first if")
            if '-' in m:
                return 'N'
    return 'Y'
            
if __name__ == "__main__":
    print(solve())


'''
z = int(input())
    for j in range(z):

7
6 6 6
****** --*---
****** -**---
****** ******
****** ******
****** -**---
*****- --*---
2 4 6
**** ------
***- *-----
2 6 4
****** ****
*-**-* ----
1 1 1
* *
1 1 1
* -
1 1 1
- *
1 1 1
- -
'''