#include <stdio.h>

int a;

void foo(void)
{
    a = 40;
    printf("This is function in foo [\e[36m%d\e[0m]\n", a);
}

int main()
{ 
    printf("The first a is = \e[36m%d\e[0m\n", a);
    foo();
    a = 200;
    printf("This is second a = \e[36m%d\e[0m\n", a);

    return 0;
}
