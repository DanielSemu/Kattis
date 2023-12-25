import math
x,y=map(int, input().split())
z=x/ math.sin(y * (math.pi)/180)

print(math.ceil(z))
