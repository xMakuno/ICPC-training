def other_solution():
    n = int(input())
    sum = int((n*(n+1)*(2*n+1))/3 - (n*(n+1))/2)
    print(sum,2*n)
 
    r = ""
    for j in range(1,n+1):
        r += str(j) + " "   
    for i in range(1,n+1):
        print(1,n-i+1,r)
        print(2,n-i+1,r)
def my_sol():
    n = int(input())
    perm = list(range(1,n+1))
    sum = int((n*(n+1)*(2*n+1))/3 - (n*(n+1))/2)
    print(sum, 2*n)
    for i in range(n,0,-1):
        print(1,i,*perm)
        print(2,i,*perm)

if __name__ == "__main__":
    t = int(input())
    while t:
        t-=1
        my_sol()
        # other_solution()