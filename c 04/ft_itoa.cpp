#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	int n = nbr;
	int len = 0;
	char *arr;
	
	if(n == -2147483648)
		return("-2147483648");
	if(n <= 0)
		len++;
	while(n)
	{
		n /= 10;
		len++;
	}
	arr = (char *)malloc(sizeof(char)*(len + 1));
	if(!arr)
		return (NULL);
	arr[len] = '\0';
	if(nbr == 0)
	{
		arr[0] = '0';
		return (arr);
	}
	if(nbr < 0)
	{
		arr[0] = '-';
		nbr = -nbr;
	}
	while(nbr)
	{
		arr[--len] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (arr);
}

int main()
{
	int a=-2147483648;
	char *ab=ft_itoa(a);
	printf("%s",ab);
}


