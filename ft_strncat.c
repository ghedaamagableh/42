#include "libft.h"
#include <stdio.h>

char *ft_strncat(char *dest ,const char *src , size_t n)
{
	size_t i;
	size_t j;
	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while(src[j] != '\0' && j < n )
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int main ()
{
	char d[50] ="hello world"  ;
	const char *s = "this is last ";
	size_t n ;
	n = 7;
	ft_strncat(d,s,n);
	printf("the result %s \n",d);
	return 0;
}

