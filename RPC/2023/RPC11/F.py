if __name__ == "__main__":
    disp, t, i = [int(a) for a in input().split(" ")]
    tiring = []
    for iter in range(t):
        tiring[0:0] = [int(input())] # insert at index 0
    invig = []
    for iter in range(i):
        invig[0:0] = [int(input())] # insert at index 0
    activities = 0
    while (len(tiring)> 0 and len(invig)):
        if disp >= 0:
            if tiring[-1] <= disp:
                disp -= tiring.pop(-1)
                activities += 1
            else:
                if len(invig) > 0:
                    disp += invig.pop(-1)
                    activities += 1
                else:
                    break
    print(activities)