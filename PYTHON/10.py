# 10. Ստեղծել հաշվիչ ծրագիր, որը մուտքագրում է երկու թվեր և գործողության սիմվոլը։ Օրինակ՝ 4, 5 և ‘+’։ Կատարել համապատասխան թվաբանական գործողությունը թվերի հետ ըստ մուտքագրված գործողության սիմվոլի և տպել արդյունքը էկրանին։

x = int (input("type first num "))
y = int (input("type second num "))
z = input ("type an operator ")

if z == "+" :
	print (x + y)
elif z == "-" :
	print (x - y)
elif z == "*" :
	print (x * y)
elif z == "/" :
	print (x / y)
else :
	print ("errorrrr ")
	
