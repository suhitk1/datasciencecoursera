#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main()
{
    int cr = 0;float change;
    
    do
	{
		printf("How much change is owed? \n");
		change = GetFloat();
	}
	 while (!(change > 0));
    
    
    int amt =  round(change * 100);
    
    while (amt > 0) {
        if ((amt - 25) >= 0) { amt  -= 25; cr++; }
        else if ((amt - 10) >= 0) { amt -=  10; cr++; }
        else if ((amt - 5) >= 0) { amt -=  5; cr++; }
        else if ((amt - 1) >= 0) { amt -=  1; cr++; }
    }
    
    printf("%d\n", cr);
    return 0;
}