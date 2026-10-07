mydict={}
print("Enter elements of first dict:")
while True:
    key=input("Enter key(or 'q' to quit):")
    if key=='q':
        break
    value=int(input("Enter values:"))
    mydict[key]=value
print("Enter elements to second dict:")
mydict2={}
while True:
      key=input("Enter key(or 'q' to quit):")
      if key=='q':
          break
      value=int(input("Enter values:"))
      mydict2[key]=value
print(mydict|mydict2)
