#include <stdio.h>

int main(void)
{
    int year, month, day;
    
	// Prompt user
	scanf("%d.%d.%d", &year, &month, &day);
    printf("%.4d.%.2d.%.2d", year, month, day);
    
    return 0;
}
