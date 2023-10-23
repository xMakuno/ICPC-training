if __name__ == "__main__":
    limak,bob=[int(x) for x in input().split()]
    years=0
    while(limak<=bob):
        limak *=3
        bob*=2
        years+=1
    print(years)