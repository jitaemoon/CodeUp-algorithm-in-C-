#include <stdio.h>

int main(void)
{
    char x, y;
    
	// Prompt user 2 characters
	scanf("%c %c", &x, &y);
    
	// Print charters switched
	printf("%c %c", y, x);
    
    return 0;
}
