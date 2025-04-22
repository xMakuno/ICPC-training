hello = "><+-.,[]"
s = input()
ans = ""
for c in s:
    ans += bin(hello.index(c)+8)[2:7]
print(int(ans,base=2) % (1000003))