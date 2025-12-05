#include "libft.h"
#include <stdio.h>

int ft_isalpha(int c)
{

if((c >= 'A' && c <= 'Z' ) || ( c >= 'a' && c <= 'z'))
		return(1);
		else
		return(0);

}
/*int	main(void)
{
	char	c;

	c = 'A';
	if(ft_isalpha(c))
	{
		printf(" %c the c is alpha", c);

	}
	else 
		printf(" %c the c is not ", c);

}
*/
