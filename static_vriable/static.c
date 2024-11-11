#include <stdio.h>

void increment()
{
    static int counter = 0;
    counter++;
    printf("%d\n",counter);
}

int main()
{
    increment();
    increment();
    increment();
}

// #include <stdio.h>

// static int static_var = 20; 

// void print_static() {
//     printf("Static Variable: %d\n", static_var);
// }

// int main() {
//     print_static();
//     return 0;
// }
