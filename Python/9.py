# 9. Մուտքագրել թիվ, տպել թվի թվանշանների գումարը էկրանին։ Օրինակ՝ մուտքագրված 5479 թվի համար տպել 25 (որովհետև 5+4+7+9=25)

x = int(input("enter a number "))
sum = 0
while x:
        sum = sum + x % 10
        x = x // 10
print(sum)

