#include <unistd.h>

int ft_atoi (char *str)
{
	int result = 0;
	int sign = 1;
	
	while(*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if(*str == '-')
		sign = -1;
	if(*str == '-' ||*str == '+')
		str++;
	while(*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (sign * result);
}

int main()
{
	char arr[] = "123";
	int a = ft_atoi(arr);
	printf("%s",arr);
}

int main()
{
	char *a = "11012ab";  
	printf("%d", ft_atoi_base(a,2));
}





















