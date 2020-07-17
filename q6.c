#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()

{
    char instr[100];

    printf("input a number\n");
    scanf("%s", instr);
    int length = strlen(instr);
    int num = atoi(instr);
    /*printf("%d\n",length);*/
    
    if (length == 2) {
        length = length-1;
        /*printf("%d\n",length);
        printf("%d\n",num);*/
        instr[strlen(instr)-1] = '\0';
        int num2 = atoi(instr);
        switch (num2) {
            case 1:
                switch (num - 10) {
                    case 1:
                        printf("eleven");
                        break;
                    case 2:
                        printf("twelve");
                        break;
                    case 3:
                        printf("thirteen");
                        break;
                    case 4:
                        printf("fourteen");
                        break;
                    case 5:
                        printf("fifteen");
                        break;
                    case 6: 
                        printf("sixteen");
                        break;
                    case 7:
                        printf("seventeen");
                        break;
                    case 8:
                        printf("eighteen");
                        break;
                    case 9:
                        printf("nineteen");
                        break;
                }
                break;
            case 2:
            printf("twenty");
            num = num - 20;
                break;
            case 3:
            printf("thirty");
            num = num - 30;
                break;
            case 4:
            printf("forty");
            num = num - 40;
                break;
            case 5:
            printf("fifty");
            num = num - 50;
                break;
            case 6:
            printf("sixty");
            num = num - 60;
                break;
            case 7:
            printf("seventy");
            num = num - 70;
                break;
            case 8:
            printf("eighty");
            num = num - 80;
                break;
            case 9:
            printf("ninety");
            num = num - 90;
                break;
        }
    }
    if (length == 1) {
        switch (num) {
            case 0:
                printf("zero");
                break;
            case 1:
                printf("one");
                break;
            case 2:
                printf("two");
                break;
            case 3:
                printf("three");
                break;
            case 4:
                printf("four");
                break;
            case 5:
                printf("five");
                break;
            case 6:
                printf("six");
                break;
            case 7:
                printf("seven");
                break;
            case 8:
                printf("eight");
                break;
            case 9:
                printf("nine");
                break;
        }
    }
}