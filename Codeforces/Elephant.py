if __name__ == "__main__":
    x = int(input())

    answer = int(x/5)

    if(x % 5 == 0):
        print(answer)
    else:
        print(answer + 1)