s=input()
p=-1
for i in s:
       if(i>='A' and i<='Z'):
              i=i.lower()
              p=i
              
       elif(i>='a' and  i<='z'):
              p=i
              

if(p=='a' or p=='e' or p=='i' or p=='o' or p=='u' or p=='y'):
       print("YES")
else:
       print("NO")


