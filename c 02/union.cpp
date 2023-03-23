#include <unistd.h>

int check (int c, char *str, int index)
{
	int i = 0;
	while(i < index)
	{
		if(str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int main(int ac, char **av)
{
	int i = 0;
	int j = 0;
	int k = 0;
	
	if(ac == 3)
	{
		while(av[1][i])
			i++;
		while(av[2][j])
		{
			av[1][i] = av[2][j];
			i++;
			j++;
		}
		i--;
		while(k <= i)
		{
			if(check(av[1][k],av[1],k) == 1)
				write(1,&av[1][k],1);
			k++;
		}
	}
	write(1,"\n",1);
}
