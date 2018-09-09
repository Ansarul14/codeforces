import math 
n=int(input())
li=[]
li=list(map(int,input().split(' ')))
c=0;
ans=[]
p=1
p=len(li)
for i in range(0,n-1):
	if (li[i+1]<=li[i]):
		c=c+1
		ans.append(li[i])
c=c+1

ans.append(li[n-1])
print(c)
for i in ans:
	print(i,end=' ')


