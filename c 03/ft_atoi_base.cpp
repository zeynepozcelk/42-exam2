#include <unistd.h>
#include <stdio.h>


int	ft_atoi_base(const char *str, int str_base)
{
	int num = 0;
	int sign = 1;
	while((*str >= 9 && *str <= 13) || *str ==' ')
		str++;
	if(*str == '-' || *str == '+')
	{
		if(*str == '-')
			sign = -1;
		str++;
	}
	while((*str <= '9' && *str >= '0' && *str <(str_base + '0')) ||
	(*str <= 'f' && *str >= 'a' && *str <(str_base + 'a' - 10)) ||
	(*str <= 'F' && *str >= 'A' && *str <(str_base + 'A' - 10)))
	{
		if(*str <= '9' && *str >= '0')
			num = num * str_base + (*str - 48);
		else if(*str <= 'f' && *str >= 'a')
			num = num * str_base + 10 + (*str - 'a');
		else
			num = num * str_base + 10 + (*str - 'A');
		str++;
	}
	num *= sign;
	return num;
}

int main()
{
	char *a = "11012ab";  
	printf("%d", ft_atoi_base(a,2));
}
