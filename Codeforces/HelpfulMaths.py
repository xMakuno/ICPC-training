def function(operation):
    numbers = [int(a) for a in operation.split("+")]

    numbers.sort()
    return numbers

if __name__ == "__main__":
    operation = input()

    sortedArray = function(operation)
    helpfulOperation = ""
    for idx, x in enumerate(sortedArray):
        if(idx == 0):
            helpfulOperation = str(x)
        else:
            helpfulOperation = helpfulOperation + "+" + str(x)

    print(helpfulOperation)