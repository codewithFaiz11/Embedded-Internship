#include <stdio.h>

extern float pi; 


int main()
{
    printf("Trying to access pi from main.c: %.2f\n", pi);
    return 0;
}
