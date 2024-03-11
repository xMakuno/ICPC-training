if __name__ == "__main__":
    n = int(input())
    secret = ""
    d = []
    g = {}
    for i in range(n):
        if i == 0:
            secret = input()
            for j in range(5):
                d.append([char for idx, char in enumerate(secret) if idx != j])
        else:
            guess = input()
            temp = ""
            for j in range(5):
                if guess[j] == secret[j]:
                    temp = temp + "*"
                else:
                    if guess[j] in d[j]:
                        temp = temp + "!"
                    else:
                        temp = temp + "X"
            if temp in g:
                g[temp] += 1
            else:
                g[temp] = 1
    k = int(input())
    for i in range(k):
        code = input()
        if code == "*****":
            print(1)
        elif code in g:
            print(g[code])
        else:
            print(0)