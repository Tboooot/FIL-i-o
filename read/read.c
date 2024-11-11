
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

#define BUFFER_SIZE 100

int	main(void)
{
	char	buf[BUFFER_SIZE + 1];	
	int	fd;		
	int	nb_read;	
	int	count;		


	fd = open("file.txt", O_RDONLY);
	if (fd == -1)
		return (1);
	nb_read = -1;
	count = 0;

	while (nb_read != 0)
	{
	
		nb_read = read(fd, buf, BUFFER_SIZE);
		if (nb_read == -1)
		{
			printf("Read error!\n");
			return (1);
		}

		buf[nb_read] = '\0';
		printf("\e[36m%d : [\e[0m%s\e[36m]\e[0m\n", count, buf);
		count++;
	}
	close(fd);
	return (0);
}