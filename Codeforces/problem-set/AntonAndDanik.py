if __name__ == "__main__":
    x = int(input())
    games = input()

    anton = 0
    for i in range(0, x):
        if(games[i] == "A"):
            anton += 1

    if(x % 2 == 0 and x/2 == anton):
        print("Friendship")
    elif(anton > x - anton):
        print("Anton")
    else:
        print("Danik")