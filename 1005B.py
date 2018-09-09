li1=[]
li2=[]
li1=input()
li2=input()
n=len(li1)
m=len(li2)
p=n+m
c=0
if n>=m:
	for i in range(0,m):
		if li2[m-i-1]==li1[n-i-1]:
			c=c+1
		else:
			break
else:
	for i in range(0,n):
		if li2[m-i-1]==li1[n-i-1]:
			c=c+1
		else:
			break
print(p-c*2)