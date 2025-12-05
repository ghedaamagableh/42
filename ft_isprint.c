#include "libft.h"

int ft_isprint(int c)
{
	return(c >= 32 && c <= 126);

}
int main()
{
	char c ; 
	c= 35;
	if(ft_isprint(c))
		write(1,"is print",8);
	else
		write(1,"is not print",11);
}
