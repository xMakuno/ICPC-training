if __name__ == "__main__":
    num, times = [int(x)for x in input().split(" ")]

    for i in range(0,times):
        # print(f"This is the action number #{i} and this is the number prior to operating it: {num}")
        if(str(num)[-1] == str(0)):
            num = int(num / 10)
        else:
            num -= 1
        #print(f"This is the number after operating: {num}")
    print(int(num))