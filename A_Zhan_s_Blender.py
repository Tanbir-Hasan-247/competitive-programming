t=int(input())
print('t:',t)
while t>0:
    n=int(input())

    a=int(input())
    b=int(input())

    z=min(a,b)
    if n%z==0:
        print(n//z)
    else:
        print(n//z +1)
    
    t-=1