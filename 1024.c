#include <stdio.h>
#define N 20

int main(void)
{
    char word[N];
    
	// Prompt user
	scanf("%s", word);
    for (int i = 0; i < N; i++)
    {
        if (word[i] == NULL)
        {
            break;
        }
        printf("'%c'\n", word[i]);
        
    }
    return 0;
}
