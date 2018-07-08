import math
n=int(input())
c=0
m=-1
while True:
	if n>=100:
		m=int(n/100)
		n=int(n%100)
		c=c+m
	elif n>=20:
		m=int(n/20)
		n=int(n%20)
		c=c+m
	elif n>=10:
		m=int(n/10)
		n=int(n%10)
		c=c+m
	elif n>=5:
		m=int(n/5)
		n=int(n%5)
		c=c+m
	elif n>=1:
		c=c+n
		break
	if n==0:
		break

print(c)

