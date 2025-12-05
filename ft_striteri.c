#include "libft.h"
#include <unistd.h>
#include <stdio.h>

void ft_striteri(char *s ,void(*f)(unsigned int , char *))
{
	unsigned int i;
	i = 0;
	if(!s || !f)
		return;
	while(s[i])
	{
		f(i,&s[i]);
		i++;
	}
}
void to_upper(unsigned int i , char *c)
{
	(void)i;
	if( *c >= 'a' && *c <= 'z')
		*c -=32;

}
int main ()
{
	char str1[]="hello";
	char str2[]="world";
	char str3[]="ft_irbid";
	printf("before striteri %s\n",str1);
	ft_striteri(str1,to_upper);
	printf("after striter %s \n\n",str1);

	printf("before striter %s\n",str2);
	ft_striteri(str2,to_upper);
	printf("after steiteri %s \n\n",str2);

	printf("before striter %s \n",str3);
	ft_striteri(str3,to_upper);
	printf("after striteri %s \n\n",str3);
}

	
