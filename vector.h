#include <stdio.h>
#include <malloc.h>


#ifndef VECTOR_LIBRARY_H
#define VECTOR_LIBRARY_H


typedef struct Vector {
    int *data;
    size_t size;
    size_t capacity;
} Vector;


Vector createVector(size_t n);

void reserve(Vector *v, size_t newCapacity);

void clear(Vector *v);

void shrinkToFit(Vector *v);

void deleteVector(Vector *v);

#endif //VECTOR_LIBRARY_H
