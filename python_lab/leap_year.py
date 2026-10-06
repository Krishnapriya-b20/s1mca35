yr1=2026
yr2=int(input("Enter the year:"))
print("leap year between",yr1,"and",yr2,"are")
for i in range(yr1,yr2+1):
    if(i%4==0 and i%100!=0) or (i%400==0):
        print(i,"")

