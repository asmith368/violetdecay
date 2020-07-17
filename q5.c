#include <stdio.h>
#include <stdlib.h>

int main(void)

{
    unsigned int i, j, max = 0;
    for (i = 100; i <= 999; i++) {
        for (j = 100; j <= 999; j++) {
            unsigned int number = i * j;
            if (palindrome(number) && number > max) {
                max = number;
            }
        }
    }
    printf("%u\n", max);
    return 0;
}

int palindrome(unsigned int n) 
{
    unsigned int reversednumber = 0, t = n;
    while(t) {
        reversednumber = 10 * reversednumber + (t % 10);
        t /= 10;
    }
    return reversednumber == n;
}