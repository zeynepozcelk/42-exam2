#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char **ft_split(char *str)
{
	char **arr;
	int i,j;
	
	if(!str || !*str)
		return(NULL);
	arr=(char**)malloc(sizeof(char*)*1000);
	if(!arr)
		return (NULL);
	
	i= 0;
	while(*str)
	{
		if(*str > 32)
		{
			j = 0;
			*(arr + i)= (char*)malloc(sizeof(char)*1000);
			if(!arr[i])
				return(NULL);
			while((*str > 32) && *str)
			{
				arr[i][j] = *str;
				str++;
				j++;
			}
			arr[i][j] = '\0';
			i++;
		}
		else
		str++;
	}
	arr[i] = NULL;
	return arr;	
}

int main()
{
    char b[] = {58,45,5};
    char **a = ft_split(b);
    int i = 0;
    while(b[i])
    {
    	printf("%d", b[i]);
    	printf("\n");
    	i++;
	}
}

int main()
{
    char **a = ft_split("NULL");
    int i = 0;
    while (a[i])
    {
        printf("%s\n", a[i]);
        i++;
	}
}


