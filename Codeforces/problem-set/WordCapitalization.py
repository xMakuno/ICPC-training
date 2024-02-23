def capitalizeSingle(word):
    upperChar = word[0].upper()
    return ''.join([upperChar, word[1:]])

if __name__ == "__main__":
    word = input()

    capitalizedWord = capitalizeSingle(word)
    print(capitalizedWord)