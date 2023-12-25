def back(g,h,m):
    d_h = g//60
    dm = g%60
    h-=d_h
    m-= dm
    if m<0:
        h-=1
        m+=60
    if h<0:
        h+=24
    print(h,m)


def forw(g,h,m):
    dh = g//60
    dm = g%60
    h+=dh
    m+=dm
    if m>=60:
        h+=1
        m-=60
    if h>=24:
        h-=24
    print(h,m)


for i in range(int(input())):
    c, g, h, m = map(str, input().split())
    g= int(g)
    h = int(h)
    m = int(m)
    if c =='B':
       back(g,h,m)
    elif c=='F':
        forw(g,h,m)