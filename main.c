/*===============================================================================*/
/* Autor: Rafael Silvério da Silva - https://github.com/rafasilverio/avl-tree  */
/*===============================================================================*/

#include "heap_sort.h"

int main(){
  int array_char[] = {'P', 'S', 'C', 'K', 'M', 'L', 'A', 'X', 'E'};
  int array_int[] = {13, 3, 10, 15, 2, 1, 7, 9, 5, 17};
  int size_char = sizeof(array_char)/sizeof(array_char[0]);
  int size_int = sizeof(array_int)/sizeof(array_int[0]);

  printf("Array Chars\n");
  print_char(array_char, size_char);
  heap_sort(array_char, size_char);
  printf("\nSorted array chars\n");
  print_char(array_char, size_char);

  printf("\nArray Ints\n");
  print_int(array_int, size_int);
  heap_sort(array_int, size_int);
  printf("\nSorted array Ints\n");
  print_int(array_int, size_int);

  swaps_and_compares();

  return 0;
}
