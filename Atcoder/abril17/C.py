def mapList(word):
    last_char = '1'
    memo = []
    for char in word:
        if char == last_char:
            memo[-1][1] += 1
        else:
            memo.append([char, 1])
        last_char = char
    return memo

def solve():
    s = [*input()]
    t = [*input()]
    if s == t:
        return "Yes"
    else:
        smemo = mapList(s)
        tmemo = mapList(t)
        # print(smemo)
        # print(tmemo)
        if len(smemo) != len(tmemo):
            return "No"
        else:
            for i in range(len(tmemo)):
                # print(smemo[i][0])
                # print(tmemo[i][0])
                if smemo[i][0] != tmemo[i][0]:
                    return "No"
                else:
                    if smemo[i][1] < tmemo[i][1] and smemo[i][1] >= 2:
                        continue
                    elif smemo[i][1] == tmemo[i][1]:
                        continue
                    else:
                        return "No"
            return "Yes"

if __name__ == "__main__":
    print(solve())