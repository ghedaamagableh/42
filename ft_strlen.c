#include "libft.h"
#include <stdio.h>
size_t ft_strlen(const char *s)
{
	int i;
	i=0;
	while (s[i])
		i++;
	return (i);
}
/*int main()
{
	char *s;
	s= "hello";
		printf(" %lu the str ",ft_strlen(s));
}
*/
