if __name__ == "__main__":
    num = int(input())
    stones = input()
    minStones = 0
    
    for i in range(0,num-1):
        if stones[i] == stones[i+1]:
            minStones += 1
    
    print(minStones)