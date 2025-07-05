#include <stdio.h>

extern float pi; 
void function();  

int main()
{
    function();  // Call the function defined in math.c
    printf("Trying to access pi from main.c: %.2f\n", pi);
    return 0;
}
