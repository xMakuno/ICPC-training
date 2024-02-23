def parseLine():
    line = input()
    list = [a for a in line.split(" ")]


    for idx, x in enumerate(list):
        if 1 == int(x):
            return idx+1
        else:
            continue
    return -1

if __name__ == "__main__":
    
    for j in range(1, 6):
        i = parseLine()
        if(i != -1):
            coords = (i, j)
            # print(f"The x index-coordinate is: {coords[0]} \nThe y index-coordinate is: {coords[1]}")
    
    #print(f"Moves to reach center: {abs(coords[0] - 3) + abs(coords[1] - 3)}")
    print(abs(coords[0] - 3) + abs(coords[1] - 3))