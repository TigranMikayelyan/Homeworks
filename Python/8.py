# 8. Մուտքագրել թիվ, տպել թվի թվանշանները առանձին առանձին էկրանին։ Օրինակ՝ մուտքագրված 5479 թվի համար տպել ‘5’, ‘4’, ‘7’, ‘9’

num = input("enter an integer: ")
num_len = len(num)
for i in range(num_len):
	print(num[i], end = " ")
