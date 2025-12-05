#include "libft.h"
#include <stdio.h>

char *ft_strrchr(const char *s, int c)
{
	char *last; 
	last = NULL;
	while(*s)
	{
		if(*s == (char )c)
		
			last = (char *)s;
		s++;
	}

		if (c == '\0')
			return ((char *)s);
		return(last);
	
}
int main ()
{
	const char *str = "hello 42 irbid at lasr ";
	int c = 'l';
	char *res;
	res = ft_strrchr(str, c);
	if (res )
		printf("Last occurrence of '%c' found at position: %ld\n", c, res - str);
	else 
		printf("character %c not found in string \n",c);
	return(0);
}
