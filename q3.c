#include <stdio.h>
#include <stdlib.h>

int main()

{
    
    char instr[100];
    printf("Enter Input\n");
    scanf("%s", instr);
    int num;
    num = atoi(instr);
    printf("You entered %s\n",instr);
    printf("You entered %d\n",num);
    if (num%4 == 0 && num%100 != 0 || num%400 == 0)
    {
       printf("This is a leap year. \n"); 
    }
    else 
    {
        printf("This is not a leap year. \n");
    }

    return 0;
}