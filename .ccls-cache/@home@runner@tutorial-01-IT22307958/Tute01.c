/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  float avg;
  int m1,m2;
  printf("enter your first marks:");
  scanf("%d",&m1);
  printf("enter your second marks:");
  scanf("%d",&m2);
  avg = (m1+ m2)/2.0;
  printf("Average: %0.2f",avg);
  return 0;
}

