#include "libft.h"

int ft_isascii(int c)
{
	return(c >= 0 && c <= 127);
}
int main (void)
{
	int c;
	c = 300;
	if(ft_isascii(c))
	{
		write(1, " is ascii",9);
	}
	else
		write(1, "is not ascii",12);
}

