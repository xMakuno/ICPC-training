def sol2():
    n = input()
    s = [a for a in input().split(" ")]
    flipped = False
    memo = ""
    ans = 1
    for i in s:
        print(f'THIS IS THE CHAR {i}')
        if len(memo) == 0:
            print(memo)
            if i == 1:
                ans += 1
                print(ans)
            memo += i
        else:
            if i == '0':
                if flipped:
                    print(f'Memo is: {memo} Bitcount Flipped: {(len(memo) - int(memo, 2).bit_count())}')
                    ans += (len(memo) - int(memo, 2).bit_count())
                    print(ans)
                else:
                    print(f'Memo is: {memo} Bitcount: {int(memo, 2).bit_count()}')
                    ans += int(memo, 2).bit_count()
                    print(ans)
                memo += i
                # print(memo)
            else:
                flipped = not flipped
                if flipped:
                    print(f'Memo is: {memo} Bitcount Flipped: {(len(memo) - int(memo, 2).bit_count())}')
                    ans += (len(memo) - int(memo, 2).bit_count())
                    print(ans)
                else:
                    print(f'Memo is: {memo} Bitcount: {int(memo, 2).bit_count()}')
                    ans += int(memo, 2).bit_count()
                    print(ans)
                ans += 1
                memo += i
                # print(memo) 
    print(ans)

""" def sol3():
    n = int(input())
    s = [ int(a) for a in input().split(" ")]
    for i in s:
        if i == 1:
 """

if __name__ == "__main__":
    sol2()