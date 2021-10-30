#include <stdio.h>
int main()
{
	int ch, chp, chn;
	printf("Enter your number: ");
	scanf("%i", &ch);
	
	if ((ch > 0) || (ch < 0))
	{
		int tmp = ch % 2;
		if ((tmp == 0) && (ch > 0))
		{
			printf("It's positive even number");
		}
		else if ((tmp == 1) && (ch > 0))
		{
			printf("It's positive odd number");
		}
		else if ((tmp == 0) && (ch < 0))
		{
			printf("It's negative even number");
		}
		else if ((tmp == -1) && (ch < 0))
		{
			printf("It's negative odd number");
		}
	}
	else if (ch == 0)
	{
		printf("It's zero");
	}
	
		
}