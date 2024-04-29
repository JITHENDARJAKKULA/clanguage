#include <stdio.h>

int main() {
  int myNumbers[] = {25, 50,56,67,78,89,67,78,89,990,898,232,345,567,765,789,53, 75, 100};
  int length = sizeof(myNumbers) / sizeof(myNumbers[0]);
  int i;

  for (i = 0; i < length; i++) {
    printf("%d\n", myNumbers[i]);
  }
  
  return 0;
}