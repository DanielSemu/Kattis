n=int(input())
for i in range(n):
    x=int(input())
    lst = list(map(int, input().split()))
    for j in lst:
        if lst.count(j)>1:
            pass
        else:
            print("Case #", end="")
            print(i+1, end="")
            print(": ",j)