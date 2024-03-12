def checkPalindrome(num):
    for i in range(len(num)//2):
        if num[i] != num[-1*(i+1)]:
            return False
    return True
        
 
def convertToBase(base, num):
    converted = []
 
    if base == 2:
        return list(bin(num)[2:])
    else:
        while num > 0:
            converted.insert(0, str(num % base))
            num = num // base
        return converted

def TLE():
    n =  int(input())
    ans = []
    if n == 2:
        print("*")
    else:
        for i in range(2, n+1):
            # print(f'Base {i}: {convertToBase(i, n)}')
            num =  convertToBase(i,n)
            if checkPalindrome(num):
                ans.append(i)
        print(*sorted(ans))

if __name__ == "__main__":
    TLE()