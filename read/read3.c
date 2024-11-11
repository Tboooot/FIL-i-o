#include <fcntl.h>

#define size 100
int main()
{
    char buf[size+1];
    size_t number;
    int fd = open("file.txt",O_RDONLY);
    if(fd == -1)
    {
        printf("not open you have a error");
        exit(1);
    }
    while(no_read != 0)
    {
    number = read(fd,buff,size);
    if(number == -1)
    {
        printf("not open you have a error");
        exit(1);
    }
    buf[size] = '\0';
    printf("%d")

}