if __name__ == "__main__":
    word = input()
    toCompare = input()
    flag = True
    if(len(word) != len(toCompare)):
        flag = False
    else:
        for idx, letter in enumerate(word):
            if(letter != toCompare[len(word)-idx-1]):
                flag = False
                break

    if(flag):
        print("YES")
    else:
        print("NO")