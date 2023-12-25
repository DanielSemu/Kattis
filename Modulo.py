lst=[]
for i in range(10):
    x=int(input())
    lst.append(x%42)
lst2=[]
for i in lst:
    if i in lst2:
        continue
    else:
        lst2.append(i)
print(len(lst2))
