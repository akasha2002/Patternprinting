/******************************************************************************
Output:
    A
   A B
  A   B
 A     B
A       B
 A     B
  A   B
   A B
    A
*******************************************************************************/
#include <stdio.h>

int main() {
  int size = 5;
  int alpha = 65;
  int num = 0;
  // upside pyramid
  for (int i = 1; i <= size; i++) {
    // printing spaces
    for (int j = size; j > i; j--) {
      printf(" ");
    }
    // printing alphabets
    for (int k = 0; k < i*2-1; k++) {
      if (k == 0 || k == 2*i-2) {
        printf("%c", alpha + num++);
      } else {
        printf(" ");
      }
    }
    // set the number to 0
    num = 0;
    printf("\n");
  }
  // downside triangle
  for (int i = 1; i < size; i++) {
    // printing spaces
    for (int j = 0; j < i; j++) {
      printf(" ");
    }
    // printing alphabets
    for (int k = (size-i)*2-1; k >= 1; k--) {
      if (k == 1 || k == (size-i)*2-1) {
        printf("%c", alpha + num++);
      } else {
        printf(" ");
      }
    }
    // set the number to 0
    num = 0;
    printf("\n");
  }
  return 0;
}
