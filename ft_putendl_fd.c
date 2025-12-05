#include "libft.h"
#include <unistd.h>
#include <fcntl.h>

void ft_putendl_fd(char *s, int fd)
{
	int i;
	i =0 ;
	while(s[i])
	{
		write(fd,&s[i],1);
		i++;
	}
	write(fd,"\n",1);
}
int main()
{
	int fd ;
	fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC , 0644);
	if( fd < 0)
		return 1;
	ft_putendl_fd("first world ", fd);
	ft_putendl_fd("secend line ", fd);
	close (fd);
	return 0;
}
