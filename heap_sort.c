/*===============================================================================*/
/* Autor: Rafael Silvério da Silva - https://github.com/rafasilverio/heap_sort
/*        Rodrigo Tribiolli Moreira
/*===============================================================================*/

#include "heap_sort.h"

int _compares = 0;
int _swaps = 0;

void compares(void){ _compares++; }
void swaps(void){ _swaps++; }
void swap(int* one, int* two){ int aux = *one; *one = *two;  *two = aux; }

void max_heapify(struct heap* max_heap, int old_largest){
  int largest = old_largest;
  int left = (old_largest << 1) + 1;  //2*i + 1
  int right = (old_largest + 1) << 1; //2*i + 2

  if (left < max_heap->size && max_heap->array[left] > max_heap->array[largest]){
    largest = left;
    compares();
  }
  if (right < max_heap->size && max_heap->array[right] > max_heap->array[largest]){
    largest = right;
    compares();
  }
  if (largest != old_largest){
    swap(&max_heap->array[largest], &max_heap->array[old_largest]);
    swaps();
    max_heapify(max_heap, largest);
  }
}

void min_heapify(struct heap* min_heap, int old_largest){
  int largest = old_largest;
  int left = (old_largest << 1) + 1;  //2*i + 1
  int right = (old_largest + 1) << 1; //2*i + 2

  if (left < min_heap->size && min_heap->array[left] < min_heap->array[largest]){
    largest = left;
    compares();
  }
  if (right < min_heap->size && min_heap->array[right] < min_heap->array[largest]){
    largest = right;
    compares();
  }
  if (largest != old_largest){
    swap(&min_heap->array[largest], &min_heap->array[old_largest]);
    swaps();
    min_heapify(min_heap, largest);
  }
}

heap* create_build_heap(int *array, int size, int which_one){
  int i;
  heap* my_heap = (heap*) malloc(sizeof(heap));
  my_heap->size = size;
  my_heap->array = array;

  for (i = (my_heap->size - 2) / 2; i >= 0; --i)
    (which_one == MIN) ? min_heapify(my_heap, i) : max_heapify(my_heap, i);
  return my_heap;
}

void heap_sort(int* array, int size, int which_one){
  heap* my_heap = create_build_heap(array, size, which_one);

  if(size > 1){
    (which_one == MIN) ? min_heapify(my_heap, 0) : max_heapify(my_heap, 0);
    swap(&array[0], &array[my_heap->size - 1]);
    swaps();
    heap_sort(my_heap->array,--my_heap->size, which_one);
  }
}

void print_int(int* array, int size){
  int i;
  for (i = 0; i < size; ++i) printf("%d ", array[i]);
}

void print_char(int* array, int size){
  int i;
  for (i = 0; i < size; ++i) printf("%c ", array[i]);
}

void swaps_and_compares(void){
  printf("\nComparacoes: %d", _compares);
  printf("\nTrocas: %d", _swaps);
}
