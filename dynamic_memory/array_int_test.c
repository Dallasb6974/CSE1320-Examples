#include <stdio.h>

#include "array_utils.h"

typedef struct {
    void *data
    int numel;
    int capacity;
    int elem_size;
} array_s

int add(void *, array_s *, int);

int main() {
    array_s *arr = malloc(sizeof(array_s));
    arr->elem_size = sizeof(int);
    arr->numel = 0;

    int a = 10;

    add(&a, arr, 0);
    a = 11;
    add(&a, arr, 0);
    a = 12;
    add(&a, arr, 0);

    int *data = arr->data;

    for (int i = 0; i < arr->numel; i++) {
        printf("a[%d] = %d\n", i, data[i]);
    }

    return 0;
}
