#include <stdio.h>
#include <cs50.h>


int main()
{
	printf("Mario Pyramid Building Program\n");
	

// This gets integer n and checks to make sure the integer is 1 to 24


	int a ;

	
	do
	{
		printf("a");
		a = get_int();
	}
	while (!(a >= 0 && a<=23));
		

	


// This next loop will print out the pyramid


	
		
	int c = a;
	int d = a;
	int e = 1;
	
	
	while (a != 0)
	{
		
		while (c> 1)
		{
			printf(" ");
			c--;
		}
		c = (a - 1);
		
		while (d <= a+1)
		{
			printf("#");
			d++;
		}
		printf("\n");
		a--;
		d = (a - e);
		e++;
		
	}
		
	return(0);
}
