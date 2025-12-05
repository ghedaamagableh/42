#include "libft.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>


void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

int main(void)
{
    int fd;

    fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd < 0)
    {
        write(1, "Failed to open file\n", 20);
        return (1);
    }

    ft_putchar_fd('h', fd);
    ft_putchar_fd('i', fd);
    ft_putchar_fd('\n', fd);

    close(fd);
    return (0);
}
