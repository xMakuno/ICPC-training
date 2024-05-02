if __name__ == "__main__":
    t = int(input())
    while t:
        t-=1
        input() # lens
        a = input()
        b = input()
        ans = 0
        pointer = 0
        for c in b:
            if a[pointer] == c:
                ans+=1
                pointer+=1
                if pointer == len(a):
                    break
        print(ans)
