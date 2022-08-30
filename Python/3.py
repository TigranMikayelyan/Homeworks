# 3. Մուտքագրել չորս փոփոխականներ, տպել նվազագույնի արժեքը, եթե չորս փոփոխականների գումարը հավասար է զրոյի։

a = int(input("type first num "))
b = int(input("type second num "))
c = int(input("type third num "))
d = int(input("type fourth num "))
if a + b + c + d == 0 :
	if a < b and a < c and a < d:
		print (a)
	if b < c and b < a and b < d:
		print (b)
	elif c < a and c < b and c < d :
		print (c)
	else :
		print (d)

