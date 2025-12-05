#include "libft.h"
#include <stdio.h>

int ft_atoi(const char *str)
{ 
	int sign ;
	int result;
	sign = 1;
	result = 0;
	if(*str == ' ' || *str == '\n' || *str == '\t' || *str == '\v' || *str == '\f' || *str == '\r')
		str++;
	if(*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while(*str >= '0' && *str <= '9')
	{
	       result = result * 10 + (*str - '0');
       str++;
	}
 return result* sign ;
}
/* int main (void)
 {

	 const char *s;
	 s = "hello world";
	 ft_atoi(s);
	 printf("the result in atoi %s ",s);
 }
*/
int main(void)
{
    printf("Input: \"123\"     → Output: %d\n", ft_atoi("123"));
    printf("Input: \"   -42\"   → Output: %d\n", ft_atoi("   -42"));
    printf("Input: \"+56\"      → Output: %d\n", ft_atoi("+56"));
    printf("Input: \"0042\"     → Output: %d\n", ft_atoi("0042"));
    printf("Input: \"12abc34\"  → Output: %d\n", ft_atoi("12abc34"));
    return 0;
}
