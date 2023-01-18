#  1. Մուտքագրել երեք փոփոխականներ, տպել առավելագույնի արժեքը

a = int(input("num1:"))
b = int(input("num2:"))
c = int(input("num3:"))

if (a >= b and a >= c):
	print("max is:",a)
elif (b >= a and b >= c):
	print ("max is:",b)
else:
	print("max is:",c)
