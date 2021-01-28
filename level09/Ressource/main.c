#include <stdio.h>
#include <fcntl.h>

int     main(int ac, char **av)
{
        char buff[100];
        int fd = open(av[1], O_RDONLY);

        int i = 0;
        while (read(fd, &buff[i], 1))
        {
                buff[i] = buff[i] - i;
                i++;
        }
        buff[i] = '\0';
        dprintf(1, "%s\n", buff);

        return (0);
}
