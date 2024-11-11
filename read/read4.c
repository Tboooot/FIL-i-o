#include <stdio.h>
#include <stdlib.h>    // لمكتبة exit
#include <fcntl.h>     // للمكتبة الصحيحة
#include <unistd.h>    // لدالة read و close
#define SIZE 100

void read_and_print_100(int fd)
{
    char buff[SIZE + 1];
    int no_read;

    no_read = read(fd, buff, SIZE);
    if (no_read == -1)
    {
        printf("Not able to read\n");
        exit(1);
    }
    buff[no_read] = '\0';
    printf("\e[36mfd %d : [\e[0m%s\e[36m]\e[54m\n", fd, buff);
}

int main()
{
    int fd1, fd2;

    fd1 = open("cat.txt", O_RDONLY);
    fd2 = open("cat.txt", O_RDONLY);

    if (fd1 == -1 || fd2 == -1)
    {
        printf("Unable to open the file\n");
        return 1;
    }

    read_and_print_100(fd1);
    read_and_print_100(fd1);
    read_and_print_100(fd2);

    close(fd1);
    close(fd2);

    return 0;
}
