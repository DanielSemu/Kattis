from math import sqrt
n,w,h=map(int, input().split())
dig=sqrt((w*w)+(h*h))
lst=[]
for i in range(n):
    num=int(input())
    if num<=dig:
        lst.append("DA")
    else:
        lst.append("NE")
for i in lst:
    print(i)