n1=int(input("enter limit for first list:"))
ls1=[]
ls2=[]
for i in range(n1):
    c1=input("Enter colors:")
    ls1.append(c1)
print("color list1:",ls1)
n2=int(input("Enter limit for second list:"))
for i in range(n2):
    c2=input("Enter colors:")
    ls2.append(c2)
print("color list2:",ls2)
diff=set(ls1)-set(ls2)
print("colors in list1 not in list2:",diff)
