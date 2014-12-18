/*===============================================================================*/
/* Autor: Rafael Silvério da Silva - https://github.com/rafasilverio/heap_sort
/*        Rodrigo Tribiolli Moreira
/*===============================================================================*/

#include <stdio.h>
#include <stdlib.h>

#define MIN 1
#define MAX 0

typedef struct heap{
  int size;
  int* array;
} heap;

void swap(int* one, int* two);
void max_heapify(heap* heap, int largest);
void min_heapify(heap* heap, int largest);
heap* create_build_heap(int *array, int size, int which_one);
void heap_sort(int* array, int size, int which_one);
void print_int(int* arr, int size);
void print_char(int* arr, int size);
void compares(void);
void swaps(void);
void swaps_and_compares(void);
