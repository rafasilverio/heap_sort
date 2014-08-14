/*===============================================================================*/
/* Autor: Rafael Silvério da Silva - https://github.com/rafasilverio/heap_sort  */
/*        Bruno Padilha Rocha
/*===============================================================================*/

#include "heap_sort.h"

int main(){
  int array_char[] = {'P', 'S', 'C', 'K', 'M', 'L', 'A', 'X', 'E'};
  int array_int[] = {13, 3, 10, 15, 2, 1, 7, 9, 5, 17};
  int size_char = sizeof(array_char)/sizeof(array_char[0]);
  int size_int = sizeof(array_int)/sizeof(array_int[0]);

  /*Use for max_heap*/
  printf("\nArray Chars max_heap\n");
  print_char(array_char, size_char);
  max_heap_sort(array_char, size_char);
  printf("\nSorted array chars max_heap\n");
  print_char(array_char, size_char);

  printf("\nArray Ints max_heap\n");
  print_int(array_int, size_int);
  max_heap_sort(array_int, size_int);
  printf("\nSorted array Ints max_heap\n");
  print_int(array_int, size_int);

  /*Use for min_heap*/
  printf("\nArray Chars min_heap\n");
  print_char(array_char, size_char);
  min_heap_sort(array_char, size_char);
  printf("\nSorted array chars min_heap\n");
  print_char(array_char, size_char);

  printf("\nArray Ints min_heap\n");
  print_int(array_int, size_int);
  min_heap_sort(array_int, size_int);
  printf("\nSorted array Ints min_heap\n");
  print_int(array_int, size_int);

  swaps_and_compares();

  return 0;
}
