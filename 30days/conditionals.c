/*
 * Hacker Rank
 * Day 3: Introduction to conditionals statements.
 * */

#include <stdio.h>

int main(void) 
{
	int num;
	scanf("%d", &num);
	if(num < 1 || num > 100)
		return 0;
	else {
		if(num % 2)
			printf("Weird\n");
		else if(!(num % 2)) {
			if((num>=2) && (num<=5))
				printf("Not Weird\n");
			else if(((num>=6) && (num<=20)))
				printf("Weird\n");
			else if(num>20)
				printf("Not Weird\n");
		}
	}
	return 0;
}
