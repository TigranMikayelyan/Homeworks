# 12. Օգտագործելով * (աստղանիշ) սիմվոլները, էկրանին նկարել եռանկյունի։

size = int (input("type the size "))
for i in range(size) :
	print (" "  * (size - i), end = "")
	print ("*" * (i * 2 + 1))
	
"""
datark erankyun
size = int(input("type the size "))
for i in range(size) :
        print (" " * (size - i - 1), end = "")
        if i == 0 or i == size - 1 :
                print ("*" * (i * 2 + 1))
        elif i == 1:
                print ("* *")
        else :
                print ("*", " " * (i * 2 - 3), "*")

"""
