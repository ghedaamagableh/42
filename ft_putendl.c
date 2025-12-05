#include "libft.h"
#include <stdio.h>
 void ft_putendl(const char *s)
{
	int i ;
	 i= 0;
	  while(s[i])
	  {
		  write(1, &s[i],1);
		  i++;
	  }
	  write(1,"\n",1);
}
int main ()
{
	ft_putendl("hello");
	ft_putendl("world");
}
