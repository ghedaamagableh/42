#include "libft.h"

int ft_isalnum(int c)
{
	return(ft_isalpha(c) || ft_isdigit(c));
}

int main (void)
{
	char c;
	char s;
	c= 'a';
	s= '9';
	if(ft_isalpha(c) || ft_isdigit(s))
		write(1,"is true",7);
	else
		write(1,"is false",8);
}
