'''
Site: Codeforces
Contest: Codeforces Educational Round 165 Div. 2
Link: https://codeforces.com/contest/1969
Problem: B
Topic: constructive algorithms, greedy
Elo: 800
'''
def f(arr, size, a, b, cost): # First iteration is (Whole array, 1, l+1 aka 2, cost 0)
    # print(f'size: {size}, l: {a}, r: {b}, cost: {cost}')
    print(arr)
    while a != size:
        # print(f'l: {a} thing at pos: {arr[a-1]}')
        if arr[a-1] == 1:
            break
        else:
            a+=1
    # print(f'l: {l} vs length: {len(binary)}')
    if a == size:
        # print("Overflow at L") # return cost here
        print(cost)
        return
    b = a + 1
    while b != size:
        print(f'r: {b} thing at pos r-1: {arr[b-1]}')
        if arr[b-1] == 0:
            break
        else:
            b+=1
    if b == size:
        print("Overflow at R")
        print(cost)
        return
    cost += b-a+1
    arr[a-1] = 0
    arr[b-1] = 1
    # arr[l],arr[r] = arr[r],arr[l] # SWAP OPERATION
    f(arr,len(arr),a+1,b+1,cost)

def solve():
    binary = [int(i) for i in input()]
    l = 1
    r = l+1 
    cost = 0
    size = len(binary)
    f(binary,size,l,r,cost)


if __name__ == "__main__":
    solve()