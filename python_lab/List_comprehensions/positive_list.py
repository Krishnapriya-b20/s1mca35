n=int(input("Enter limit:"))
list=[]
for m in range(n):
    num=int(input("Enter the list elements:"))
    list.append(num)       
print("List:",list)
print("Positive numbers:")
for x in list:
    if x>0:
        print(x)
