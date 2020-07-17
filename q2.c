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


    return 0;
}