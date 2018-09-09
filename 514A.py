import math
import os
import operator
s=input()
if(s[0]=='9'):
       print('9',end='')
else:
       t=9-int(s[0])
       if (t<=int(s[0])):
              print(t,end='')
       else:
              print(s[0],end='')
       
for i in range(1,len(s)):
       t=9-int(s[i])
       if (t<=int(s[i])):
              print(t,end='')
       else:
              print(s[i],end='')
