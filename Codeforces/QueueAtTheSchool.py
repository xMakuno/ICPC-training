def swapKids(ans):
    boysToSwap = []
    for idx, letter in enumerate(ans):
        if(idx <= len(ans)-2):
            if(letter == "B" and ans[idx+1] == "G"):
                boysToSwap.append(idx)
    for boy in boysToSwap:
        ans[boy] = "G"
        ans[boy+1] = "B"
    return ans

if __name__ == "__main__":
    n, t = [int(x) for x in input().split(" ")]
    queue = input()
    answer = list(queue)
    for i in range(t):
        # print(f"Time is: {i+1}")
        answer = swapKids(answer)
        # print(str(answer))
    print(''.join(answer))