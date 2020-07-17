#include <stdio.h>
#include <stdlib.h>

int main()

{
    int x = 0;
    long int sum = 0;
    while(x < 1000) {
        if (x%3 == 0 || x%5 == 0)
        {
            sum = sum + x;
        }
        x++;
    }
    printf("%d\n",sum);

    return 0;
}