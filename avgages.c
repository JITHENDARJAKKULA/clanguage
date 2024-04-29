

#include <stdio.h>

int main() {
  // An array storing different ages
  int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
 
  float avg, sum = 0;
  int i;
  
  // Get the length of the array
 
    
  // Loop through the elements of the array and accumulate the sum
  for (int i = 0; i <=7; i++) {
    sum += ages[i];
  }
  
  // Calculate the average by dividing the sum by the length
  avg = sum / 7;
  
  // Print the average
  printf("The average age is: %.2f", avg);
  
  return 0;
}