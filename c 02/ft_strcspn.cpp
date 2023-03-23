#include <unistd.h>

size_t ft_strcspn(const char *s, const char *reject)
{
	int i = 0;
	int j = 0;
	
	while(s[i] != '\0')
	{
		j = 0;
		while(reject[j] != '\0')
		{
			if(s[i] == reject [j])
				return (i);
			 j++;
		}
		i++;
	}
	i = 0;
	while(s[i] != '\0')
		i++;
	return (i);
}

int main()
{
	char str[] = "zeynep";
	char str2[] = "gicikfurkan";
	int index;
	
	index = ft_strcspn(str,str2);
	printf("%d\n",index);
}


