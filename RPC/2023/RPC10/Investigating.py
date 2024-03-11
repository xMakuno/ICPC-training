def isThereGap(last, current):
    if(current - last != 1):
        return True
    else:
        return False

n = input() # number of frogs

l = input() # array of initial frog positions
l = "0 " + l # frog 0 at index 0 to simplify indexing

frogs = [int(x) for x in l.split(" ")]

maxFrogPosition = frogs[-1]
# print(f"This is the max frog position: {maxFrogPosition}")
last = 0

gaps = []
detectedGap = False

for frog in frogs:
    current = int(frog)
    if(last != 0):
        detectedGap = isThereGap(last, current) # detect if there was a gap
    if(detectedGap):                            # and if there is a gap
        gaps.append(current-1)                  # add it to the gap array
    last = current

maxGap = frogs[-1]+1                            # Establish max gap
gaps.append(maxGap)                             # Add it at the end of the gap array

""" print(frogs)
print(gaps) """

q = input() # number of jumps to execute

for iteration in range(int(q)):
    ithFrog = int(input())
    """ print(f"This is the ith Frog: {ithFrog}")
    print(f"This is its value: {frogs[ithFrog]}") """
    for idx in range(0, len(gaps), 1):
        # print(gaps)
        if(frogs[ithFrog] < gaps[idx]):             # Check if the frog jumping position is smaller than the leftmost gap
            # print(f"This is the gap: {gaps[idx]}")  # Print landing position
            print(gaps[idx])
            frogs[ithFrog] = gaps[idx]              # Assign new position to frog

            if(frogs[ithFrog] == maxGap):           # Check if the frog that is now jumping landed at the max gap (the last landing spot available)
                maxGap = maxGap + 1                 # if true, just update the max gap by adding 1
                gaps.append(maxGap)                 # insert it to the array
                maxFrogPosition = frogs[ithFrog]    # update max frog position too

            gaps.pop(idx)                           # Remove gap since frog landed on it
            # print(gaps)
            break
        else:
            continue                