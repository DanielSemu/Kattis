
n=int(input())
lst=[]
CPU=0
MEM=0
HD=0
for i in range(n):
    x,y,z=input().split()
    if x =="J":
        CPU+=1
    if y == "J":
        MEM+=1
    if z == "J":
        HD +=1

print(min(CPU,MEM,HD))