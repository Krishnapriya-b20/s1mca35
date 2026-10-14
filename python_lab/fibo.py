n=int(input("Enter the number of n terms:"))
f=0
s=1
for i in range(n):
      print(f,end=" ")
      t=f+s
      f=s
      s=t
