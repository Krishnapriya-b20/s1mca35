n=int(input("Enter the limit:"))
li=[]
s=0
print("\nEnter the numbers:")
for i in range(n):
    a=int(input())
    li.append(a)
print("list:",li)
for i in li:
    s=s+i
print("Sum:",s)
