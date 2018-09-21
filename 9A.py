import math
import os
a,b=map(int,input().split(' '))
if(a==6 and b==6):
       print("1/6")
elif(a==6 or b==6):
       print("1/6")
else:
       c=max(a,b)
       d=6-c+1;
       if(d==1):
              print("1/6")
       if(d==2):
              print("1/3")
       if(d==3):
              print("1/2")
       if(d==4):
              print("2/3")
       if(d==5):
              print("5/6")
       if(d==6):
              print("1/1")




