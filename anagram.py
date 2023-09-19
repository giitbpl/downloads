str1 = input("enter first string")
str2 = input("enter second string")
len1 = len(str1)
len2 = len(str2)
str1=sorted(str1)
str2=sorted(str2)
if str1==str2:
    print("anagram string")
else:
    print("not a anagram string") 
# if len1 == len2:
