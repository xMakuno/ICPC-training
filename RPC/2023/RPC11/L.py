if __name__ == "__main__":
    word = input()
    k = int(input())
    lanes = []
    for i in range(k):
        """ print(f'This is the k: {i}')
        print(word[i::k]) """
        lanes.append(''.join(sorted(word[i::k])))
    # print(lanes)
    ans = []
    maxL = len(lanes[0])
    # print(maxL)
    for i in range(maxL): #len of thing
        for l in lanes:
            """ print(f"if statement")
            print(f'i: {i} | k: {k-1} | length: {len(l)} | lane: {l}') """
            if i == maxL - 1 and maxL > len(l):
                break
            else:
                ans.append(l[i])
    print(''.join(ans))