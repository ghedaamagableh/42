#include "libft.h"
#include <stdio.h>


char *ft_strchr(const char *s, int c)
{
	while(*s)
	{
		if(*s == (char)c)
			return ((char *)s);
		s++;
	}
		if (c == '\0' )
			return((char *)s);
		return(NULL);
}

int main ()
{
	const char *str = " hello 42 irbid";
        int c = '4';
	char *res ;
	res = ft_strchr(str, c);
	if (res)
		printf("found %c is at bosition %ld \n",c , res- str);
	else 
		printf("the %c is not found \n",c);
	return(0);

}
