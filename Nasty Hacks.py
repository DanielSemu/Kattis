x=int(input())
for i in range (x):
    x,y,z=map(int,input().split())
    xx=y-x-z
    if xx>0:
        print("advertise")
    elif xx<0:
        print("do not advertise")
    else:
        print("does not matter")