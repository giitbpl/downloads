#include <stdio.h>
#include <string.h>
sort(char s[])
{
    int i,j;
    char temp;
    for(i=0;s[i]!='\0';i++)
    {
        for(j=i+1;s[j]!='\0';j++)
        {
            if(s[i]>s[j])
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
}
main()
{
    char str1[100], str2[100];
    int len1,len2,k;
    printf("Enter first string");
    scanf("%s", &str1);
    printf("Enter second string");
    scanf("%s", &str2);
    //len1=strlen(str1);
   // len2=strlen(str2);
   for(len1=0;str1[len1]!='\0';len1++);
   for(len2=0;str2[len2]!='\0';len2++);
   if(len1!=len2)
   {
    printf("not a anagram string.length of both strings are not equal\n");
    return;
   }
   else
   {
        sort(str1);
        sort(str2);
        for(k=0;k<len1;k++)
        {
            if(str1[k]!=str2[k])
            {
                printf("not a anagram string");
                return;
            }
        }

   }
   printf("string is anagram string");


}