n=input()
s=input()
s=s.lower()
ans=set()
for i in s:
       ans.add(i)
if(len(ans)==26):
       print("YES")
else:
       print("NO")
