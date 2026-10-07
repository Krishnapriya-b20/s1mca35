n=int(input("Enter limit:"))
li=[]
for i in range(n):
    a=int(input("Enter elements:"))
    li.append(a)
print("Original elements:",li)
for i in li:
    if i%2==0:
        li.remove(i)
print("list:",li)
