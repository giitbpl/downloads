def is_prime(x):
    i=2
    while(i<=x/2):
        if x%i==0 :
            return False
        i=i+1
    return True

n=int(input("enter number"))
i=2
j=n-2
while(j>=2):
    if is_prime(j)==True and is_prime(i)==True:
        print(str(n) +"->"+str(i)+"+"+str(j))
        break
    j=j-1
    i=i+1

