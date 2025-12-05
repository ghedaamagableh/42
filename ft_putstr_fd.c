#include "libft.h"
#include <unistd.h>
#include <fcntl.h>
void ft_putstr_fd(const char *s , int fd)
{
	int i ;
	i = 0;
	while (s[i])
	{
		write(fd,&s[i],1);
		i++;
	}
}
int main()
{
	int fd;
	fd = open("output.txt" , O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if(fd < 0)
	{
		return (1);
	}
	ft_putstr_fd("hello from 42 school ",fd);
	close(fd);
	return 0;
}
