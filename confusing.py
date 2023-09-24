num = int(input("enter number"))
flag = False
digit = 0
while num > 0:
    digit = int(num % 10)
    if digit != 0 and digit !=1 and digit !=6 and digit !=8 and digit !=9:
        flag = True
        break
    num=int(num/10)
if flag==False:
    print("confusing number")
else:
    print("not a confusing number")
