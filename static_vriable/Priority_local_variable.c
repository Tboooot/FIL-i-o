#include <stdio.h>

int a ;

void    global(void)
{
    printf("------------ Global vraible A a = %d\n",a);
}
void foo(void)
{
     a = 42;
    printf("foo is a = %d\n",a);  
}
int main(void)
{
 int a;
 a = 100;
 global()
 printf("Main: a = %d\n", a); 
 foo();
 printf("Main: a = %d\n", a);
 global();
 a = 200;
 printf("Main: a = %d\n", a); 
 global();
 return (0);
}