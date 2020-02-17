#include <stdio.h>

int main(void)
{
    int hour, minute, second;
    
	// Prompt user
	scanf("%d:%d:%d", &hour, &minute, &second);
    printf("%d\n", minute);
    
    return 0;
}
