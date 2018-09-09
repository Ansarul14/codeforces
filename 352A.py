import math
n=int(input())
s=input()
li=[]
li=s.split(' ')
n=li.count('5')
m=li.count('0')
if(m==0):
       print('-1')
elif(n==0 and m>=1):
       print('0')
elif(n<9 and m>=1):
       print('0')
else:
       t=int(n/9)
       if(t>0):
              k=t*9;
              for i in range(0,k):
                     print('5',end='')
              for i in range(0,m):
                     print('0',end='')
              
       else:
              print('-1')
