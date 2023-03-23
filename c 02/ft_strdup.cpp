#include <unistd.h>

char *ft_strdup(char *src)
{
	int i = 0;
	int lenght = 0;
	char *strcpy;
	
	while(src[lenght])
		lenght++;
	strcpy = malloc(sizeof(*strcpy) * (lenght + 1));
	if(strcpy != NULL)
	{
		while(src[i])
		{
			strcpy[i] = src[i];
			i++;
		}
		strcpy[i] = '\0';
	}
	return (strcpy);
}









