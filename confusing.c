#include <stdio.h>
main()
{
    int num = 0, digit = 0, flag = 0;
    printf("enter any number");
    scanf("%d", &num); // 689
    while (num > 0)
    {
        digit = num % 10; // fetch the digit 9 8 6

        if (digit != 0 && digit != 1 && digit != 6 && digit != 8 && digit != 9)
        {
            flag = 1;
            break; // forcefully terminate
        }
        num = num / 10; // 689 => 68 =>6 =>0
    }

    if (flag == 0)
    {
        printf("confusing number");
    }
    else
    {
        printf("not a confusing number");
    }
}