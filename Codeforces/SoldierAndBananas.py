if __name__ == "__main__":
    k,dollars,bananas=[int(x) for x in input().split(" ")]

    answer = int((k*bananas*(bananas+1))/2 - dollars)

    if(answer <= 0):
        print(0)
    else:
        print(answer)