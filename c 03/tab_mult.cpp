#include <unistd.h>
#include <stdlib.h>

long ft_atoi(char *str)
{
	long result = 0;
	while(*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if(*str == '-')
		return (-1);
	while(*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	if(!(*str >= '0' && *str <= '9' || *str == '\0'))
		return (-1);
	if(result * 9 > 2147483647)
		return (-1);
	return(result);
}

void ft_putnbr(int nb)
{
	char arr[] = "0123456789";
	if(nb > 9)
		ft_putnbr(nb / 10);
	write(1,&arr[nb%10],1);
}

int main(int ac, char **av)
{
	int i = 1;
	
	if(ac != 2)
		write(1,"\n",1);
	else
	{
		int nb = ft_atoi(av[1]);
		if(nb == -1)
		{
			write(1,"\n",1);
			return(0);
		}
		while(i <= 9)
		{
			ft_putnbr(i);
			write(1," x ",3);
			ft_putnbr(nb);
			write(1," = ",3);
			ft_putnbr(i*nb);
			write(1,"\n",1);
			i++;
		}
	}
}
