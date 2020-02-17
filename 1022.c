#include <stdio.h>

int main(void)
{
    // Array of characters
	char data[2001];
    
	// Gets spaces
	fgets(data, 2000, stdin);
    printf("%s", data);
    
    return 0;
}
