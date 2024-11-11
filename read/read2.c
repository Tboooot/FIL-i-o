#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
   int fd1 = open("sample.txt",O_RDONLY);
    char c;
    if(fd1 == -1 )
    {
        printf("file not open ");
        exit(1);
    }
     read(fd1,&c,1);
     printf("%c",c);
     close(fd1);

}
