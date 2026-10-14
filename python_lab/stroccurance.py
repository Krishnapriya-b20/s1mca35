s=input("Enter the string:")
c={}
for i in s:
    c[i]=c.get(i,0)+1
print(f"character freequency in",s,":")
for i,count in c.items():
    print(f"{i} occurs {count} times.")
