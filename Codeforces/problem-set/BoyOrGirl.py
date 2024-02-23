def findOut(username):
    if( len(set(username))%2 == 0):
        print("CHAT WITH HER!")
    else:
        print("IGNORE HIM!")

if __name__ == "__main__":
    username = input()
    findOut(username)