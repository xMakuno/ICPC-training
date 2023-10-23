if __name__ == "__main__":
    num = int(input())
    minCapacity = 0
    capacityNow = 0
    netPassangers = 0
    for i in range(num):
        a, b = [int(x) for x in input().split(" ")]
        netPassangers = b - a
        capacityNow += netPassangers
        if(minCapacity < capacityNow):
            minCapacity = capacityNow
    print(minCapacity)