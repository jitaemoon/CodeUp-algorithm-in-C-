#include <stdio.h>

int main(void)
{
    double number;
    
	// Prompt user
	scanf("%lf", &number);
    printf("%.11lf\n", number);
    
    return 0;
}
