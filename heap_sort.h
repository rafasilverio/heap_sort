/*===============================================================================*/
/* Autor: Rafael Silvério da Silva - https://github.com/rafasilverio/avl-tree  */
/*===============================================================================*/

#include <stdio.h>
#include <stdlib.h>

typedef struct max_heap{
  int size;
  int* array;
} max_heap;

void swap(int* one, int* two);
void max_heapify(max_heap* max_heap, int largest);
max_heap* create_build_heap(int *array, int size);
void heap_sort(int* array, int size);
void print_int(int* arr, int size);
void print_char(int* arr, int size);
void compares(void);
void swaps(void);
void swaps_and_compares(void);
