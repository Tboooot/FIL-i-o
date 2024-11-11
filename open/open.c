#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main()
{
    //open && creat in fd
    int fd = open("amin.txt",O_CREAT| O_WRONLY| O_TRUNC , 0664);
    if(fd == -1)
    {
        printf("erro open or creat file \n");
    }
    const char *txt = "this is test in file ";
    size_t wrrite_buffer = write(fd,txt,sizeof(char) * strlen(txt));
    if(wrrite_buffer == -1)
    {
        printf("error in write cont in txt\n");
    }
    
    printf("this sie in file %lu \n", wrrite_buffer);
}