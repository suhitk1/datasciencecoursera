#include<stdio.h>
#include<cs50.h>
int main()
{
    int min,bottle;
    printf("Hello this is the program to calculate the water you used during the shower.\nPlease enter the time you switched on the shower.\n");
    min = get_int();
    bottle = min*12;
    printf("%d minutes equals %d bottles\n",min,bottle);
    return 0;
}
