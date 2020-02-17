#include <stdio.h>

int main(void)
{
    int year, month, day;
    
	// Prompt user
	scanf("%d.%d.%d", &year, &month, &day);
    printf("%.2d-%.2d-%.4d\n", day, month, year);
    
    return 0;
}
