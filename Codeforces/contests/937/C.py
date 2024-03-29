if __name__ == "__main__":
    t = int(input())
    while t:
        t-=1
        utc = input()
        hour = int(utc[0:2])
        if hour == 0:
            print(f'12{utc[2:]} AM')
        elif hour < 12 and hour > 0:

            print(f'{utc} AM')
        elif hour == 12:
            print(f'{utc} PM')
        elif hour > 12:
            if hour < 22:
                print(f'0{hour-12}{utc[2:]} PM')
            else:
                print(f'{hour-12}{utc[2:]} PM')