/*===============================================================================*/
/* Autor: Rafael Silvério da Silva - https://github.com/rafasilverio/avl-tree  */
/*===============================================================================*/

#include "heap_sort.h"

int _compares = 0;
int _swaps = 0;

void compares(void){ _compares++; }
void swaps(void){ _swaps++; }
void swap(int* one, int* two){ int aux = *one; *one = *two;  *two = aux; }

void max_heapify(struct max_heap* maxHeap, int old_largest){
  int largest = old_largest;
  int left = (old_largest << 1) + 1;  //2*i + 1
  int right = (old_largest + 1) << 1; //2*i + 2

  if (left < maxHeap->size && maxHeap->array[left] > maxHeap->array[largest]){
    largest = left;
    compares();
  }

  if (right < maxHeap->size && maxHeap->array[right] > maxHeap->array[largest]){
    largest = right;
    compares();
  }

  if (largest != old_largest){
    swap(&maxHeap->array[largest], &maxHeap->array[old_largest]);
    swaps();
    max_heapify(maxHeap, largest);
  }
}

max_heap* create_build_heap(int *array, int size){
  int i;
  max_heap* maxHeap = (max_heap*) malloc(sizeof(max_heap));
  maxHeap->size = size;
  maxHeap->array = array;

  for (i = (maxHeap->size - 2) / 2; i >= 0; --i)
    max_heapify(maxHeap, i);
  return maxHeap;
}

void heap_sort(int* array, int size){
  max_heap* maxHeap = create_build_heap(array, size);

  if(size > 1){
    max_heapify(maxHeap, 0);
    swap(&array[0], &array[maxHeap->size - 1]);
    swaps();
    heap_sort(maxHeap->array,--maxHeap->size);
  }
}

void print_int(int* array, int size){
  int i;
  for (i = 0; i < size; ++i)
    printf("%d ", array[i]);
}

void print_char(int* array, int size){
  int i;
  for (i = 0; i < size; ++i)
    printf("%c ", array[i]);
}

void swaps_and_compares(void){
  printf("\nComparacoes: %d", _compares);
  printf("\nTrocas: %d", _swaps);
}
