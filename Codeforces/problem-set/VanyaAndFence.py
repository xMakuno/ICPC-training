if __name__ == "__main__":
    n, h = [int(x) for x in input().split(" ")]

    width = n

    friends = [int(x) for x in input().split(" ")]

    for friendHeight in friends:
        if(friendHeight > h):
            width += 1
        else:
            continue
    print(width)
    