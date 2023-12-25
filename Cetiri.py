a, b, c = map(int, input().split())
ls=[a,b,c]
ls=sorted(ls)
x=ls[1]-ls[0]
y=ls[2]-ls[1]
if x == y :
    print(ls[2]+x)
elif (x>y):
    print(ls[0]+y)
elif(x<y):
    print(ls[1]+x)


