import string

if __name__ == "__main__":
    word = input()
    caps = 0
    lows = 0
    for letter in word:
        if(letter in string.ascii_lowercase):
            lows+=1
        else:
            caps+=1
    if(lows < caps):
        print(word.upper())
    else:
        print(word.lower())