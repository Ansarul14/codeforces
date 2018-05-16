import  math
li=[]
n=int(input())
p=math.sqrt(n)
p=int(p)+2
flag=0
i=n
for i in range(2, p):
    if n % i == 0:
        li.append(i)
        if (n / i) != i:
            li.append(int(n / i))

li.append(n)
p=len(li)
for i in li:
    if i==4 or i==7 or i==44 or i==77 or i==47 or i==74 or i==447 or i==474 or i==477 or i==444 or i==744 or i==747 or i == 774 or i == 777:
       flag=1
       break

if flag==1:
    print("YES")
else:
    print("NO")


