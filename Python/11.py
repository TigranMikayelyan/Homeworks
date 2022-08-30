# 11. Գրել ծրագիր, որն օգտագործելով *, =, _ և ցանկացած այլ սիմվոլ, էկրանին կնկարի տուն։ 

size = int(input("type the size "))
for i in range(size) :
	print (" " * (size - i - 1), end = "")
	if i == 0 or i == size - 1 :
		print ("*" * (i * 2 + 1))
	elif i == 1:
		print ("* *")
	else :
		print ("*", " " * (i * 2 - 3), "*")

for i in range (size) :
	if i == size - 1 :
		print ("*" * (size * 2 - 1))
	else :
		print ("*", (size * 2 - 5) * " ", "*")
