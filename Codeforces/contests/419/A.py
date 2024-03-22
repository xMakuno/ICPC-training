def solve():
    time = input()
    hour = int(time[0:2])
    minutes = int(time[3:])
    palindromeTime =  int(time[1::-1])
    if palindromeTime >= 60:
        if hour > 5 and hour < 10:
            residue = 60*(9-hour) + 60 - minutes + 1
        else:
            residue = 60*(19-hour) + 60 - minutes + 2
        print(residue)
    else:
        if minutes > palindromeTime:
            firstDigit = time[0]
            secondDigit = str(int(time[1]) + 1) 
            nextHour = firstDigit + secondDigit
            if nextHour == "06" or nextHour == "16":
                residue = 60*4 + 60 - minutes + (1 if nextHour == "06" else 2)
            elif nextHour == "24":
                residue = 60 - minutes
            else:
                nextPalindrome = int(secondDigit + firstDigit)
                residue = 60 - minutes + nextPalindrome
            print(residue)
        elif minutes < palindromeTime:
            print(palindromeTime - minutes)
        else:
            print(0)

if __name__ == "__main__":
    solve()