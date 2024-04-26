if __name__ == "__main__":
    t = int(input())
    while t:
        t-=1
        k = int(input())
        print(k*(2**k)-1)