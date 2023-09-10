#include <stdio.h>
int is_prime(int x)
{
    int i;
    for(i=2;i<=x/2;i++)
    {
        if(x%2 == 0)
        {
            return 0;// false
        }
    }
    return 1; // true
}
int main()
{
    int n,i,j;
    printf("enter number");
    scanf("%d", &n);
    if(n>2 && n%2==0)
    {
        i=2;
        for(j=n-2; j>=2; j--)
        {
            if(is_prime(i)==1 && is_prime(j)==1)
            {
                printf("\n%d=%d+%d",n,i,j);
                break; 
            }
            i++;
        }

    }
    else
    {
        printf("number is less than 2 or odd number");
    }

}