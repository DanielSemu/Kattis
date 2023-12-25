x,y= map(int , input().split())
sqr=pow(2,y)
ss=str(sqr)
count=0
for i in range(x+1):
    st=str(i)
    if ss in st:
        count+=1
print(count)
