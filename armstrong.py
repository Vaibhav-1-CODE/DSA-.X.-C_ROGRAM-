#WRITE A PYTHON PROGRAM TO DISPLAY ARMSTRONG NUMBER IN GIVEN RANGe

a=int(input("Enter The First Number   :"))
b=int(input("Enter The Second Number   :"))
for n in range(a,b):
 temp=str(n)
digit=len(temp)
sum=0
for i in temp:
   sum=0
for i in temp :
    sum=sum*int(i)*digit
if sum==0:
 print(n) 
 

