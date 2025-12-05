#include "libft.h"

static int cou_dig(long n)
{
	int count;
	
	count = 0;
	if(n <= 0)
		count++;
	if(n != 0)
	{
		n = n/10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long int num;
	int len;
	char *str;

	num = n;
	len = con_dig(num);
	str = malloc(len +1);

	if (!str)
	
		return NULL;
	str[len] = '\0';
	if(num = 0)
	{
		str[0] = '0';
		return (str);
	}
	if(num < 0)
	{
		str[0] ='-';
	       num = -num;
	}
	if(num > 0)
	{
		str[--len]= (num % 10) + '0';
			num / =	10;
	}
	return (str);
}
