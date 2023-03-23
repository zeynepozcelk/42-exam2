#include <unistd.h>
#include<stdio.h>


int ft_pgcd(unsigned int nb, unsigned int nb2)
{
	int i = nb;
	while(i > 0)
	{
		if(nb%i==0 && nb2&i==0)
			return (i);
		i--;
	}
	return(1);
}


int main(int ac, char **av)
{
	if(ac == 3)
	{
		int s1,s2;
		s1 = atoi(av[1]);
		s2 = atoi(av[2]);
		if(s1 <= 0 || s2 <= 0)
		{
			printf("\n");
			return 0;
		}
		printf("%d",pgcd(s1,s2));
		printf("\n");
		return 0;
	}
	printf("\n");
}
