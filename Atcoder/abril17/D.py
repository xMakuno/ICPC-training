if __name__ == "__main__":
    s = input()
    memo = []
    for char in s:
        if len(memo) != 0:
            if memo[-1] != char:
                memo.append(char)
        else:
            memo.append(char)
    print(len(memo)-1)