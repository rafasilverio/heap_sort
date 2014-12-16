/*===============================================================================*/
/* Autor: Rafael Silvério da Silva - https://github.com/rafasilverio/heap_sort  */
/*===============================================================================*/

#include "heap_sort.h"

int main(){
  int array_char[] = {'P','S','C','K','M','L','A','X','E'};
  int array_int[] = {13,3,10,15,2,1,7,9,5,17};
  int size_char = sizeof(array_char)/sizeof(array_char[0]);
  int size_int = sizeof(array_int)/sizeof(array_int[0]);

  /*Use for max_heap*/
  printf("\nArray Chars max_heap\n");
  print_char(array_char, size_char);
  heap_sort(array_char, size_char,MAX);
  printf("\nSorted array chars max_heap\n");
  print_char(array_char, size_char);
  printf("\n");

  printf("\nArray Ints max_heap\n");
  print_int(array_int, size_int);
  heap_sort(array_int, size_int,MAX);
  printf("\nSorted array Ints max_heap\n");
  print_int(array_int, size_int);
  printf("\n");

  /*Use for min_heap*/
  printf("\nArray Chars min_heap\n");
  print_char(array_char, size_char);
  heap_sort(array_char, size_char,MIN);
  printf("\nSorted array chars min_heap\n");
  print_char(array_char, size_char);
  printf("\n");

  printf("\nArray Ints min_heap\n");
  print_int(array_int, size_int);
  heap_sort(array_int, size_int,MIN);
  printf("\nSorted array Ints min_heap\n");
  print_int(array_int, size_int);
  printf("\n");

  swaps_and_compares();

  return 0;
}
