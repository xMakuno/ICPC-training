w, h = map(int, input().split())
r1 = tuple(map(int, input().split()))
r2 = tuple(map(int, input().split()))
l = [r1,r2]
l.sort(key=lambda x:x[1])

u1,d1 = l[1][0], l[1][1]
u2,d2 = l[0][0], l[0][1]

s1 = w + (h)*(h+1)//2 - (d1-1)*(d1)//2 - u1
s1 = 0 if s1 < 0 else s1
# print(s1)
s2 = s1 + (d1-1)*(d1)//2 - (d2-1)*(d2)//2 - u2
s2 = 0 if s2 < 0 else s2
# print(s2)
# print((d2-1)*(d2)//2 )
s3 = s2 + (d2-1)*(d2)//2 
print(s3)