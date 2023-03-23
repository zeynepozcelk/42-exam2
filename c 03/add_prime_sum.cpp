#include <stdio.h>
#include <unistd.h>

int is_prime(int num)
{
	int i = 3;
	
	if (num <= 1)
		return (0);
	if (num % 2 == 0 && num > 2)
		return (0);
	while (i < (num / 2))
	{
		if (num % i == 0)
			return 0;
		i += 2;
	}
	return (1);
}

void ft_putnbr(int num)
{
	char arr[] = "0123456789";
	if(num > 9)
		ft_putnbr(num/10);
	write(1,&arr[num%10],1);
} 

int ft_atoi(char *str)
{
	int result = 0;
	int sign = 1;
	
	while(*str >= 9 && *str <= 13)
		str++;
	if(*str == '-')
		sign = -1;
	if(*str == '-' || *str == '+')
		str++;
	while(*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	
	return(result*sign);
}

int main(int ac, char **av)
{
	int sum = 0;
	
	if (ac == 2)
	{
		int nb = ft_atoi(av[1]);
		while (nb > 0)
		{
			if (is_prime(nb))
				sum += nb;
			nb--;
		}
		ft_putnbr(sum);
	}
	write(1, "\n", 1);
	return (0);
}
