/**    A
   B C
  D   E
 F     G
HIJKLMNOP**/
#include <stdio.h>

int main() {

  int size = 5, alpha = 65, num = 0;
  for (int i = 0; i < size; i++) {
    // print spaces
    for (int j = 0; j < size-i-1; j++) {
      printf(" ");
    }
    // print alphabets
    for (int k = 0; k < 2*i+1; k++) {
      if (i == 0 || i == size - 1) {
        printf("%c", alpha + num++);
      } else {
        if (k == 0 || k == 2*i) {
          printf("%c", alpha + num++);
        } else {
          printf(" ");
        }
      }
    }
    printf("\n");
  }
  return 0;
}
