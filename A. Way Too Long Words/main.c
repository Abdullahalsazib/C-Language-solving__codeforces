#include <stdio.h>
#include <string.h>

int main()
{
	int n, a, i;
	scanf("%d", &n);
	char word[n][102];
	for (i = 0; i < n; ++i)
	{
		scanf("%s", &word[i]);
		a = strlen(word[i]);
		if (10 < a)
		{
			printf("%c%d%c\n", word[i][0], a - 2, word[i][a - 1]);
		}
		else
		{
			printf("%s\n", word[i]);
		}
	}

	return 0;
}