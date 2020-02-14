#include <stdio.h>

int main(void)
{
    int a, b;
    
	// Prompt user
	scanf("%d-%d", &a, &b);
    printf("%.6d%.7d", a, b);
    
    return 0;
}
