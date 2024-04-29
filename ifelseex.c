#include <stdio.h>

int main() {
  int power;
  printf("enter the value of x is:\n");
  scanf("%i",&power);
   int button;
  printf("enter the value of y is:");
  scanf("%i",&button);
  if(power&&button)
  {// the power is on both inputs are correct
    printf("the fan  will rotate");
  }
  else{// the fan is off when either power is off or fan and both
  printf("the fan doesnt rotate");}
  return 0;
}