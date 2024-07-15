#include <stdio.h>

int main() {
    // Declare a pointer-to-int
    int a = 10;
    char b = 'a';
    int *p = NULL;
    char *q = NULL;

    printf("Value of p = %p\n", p);
    printf("Address of p = %p\n", &p);
    printf("Address of a = %p\n", &a);

    // Assign the address of a to p
    p = &a;

    printf("Value of p = %p\n", p);
    printf("Address of a = %p\n", &a);

    // Assign the address of b to p
    p = &b;

    printf("Value of p = %p\n", p);
    printf("Address of b = %p\n", &b);

    return 0;
}
