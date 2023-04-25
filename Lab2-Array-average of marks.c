#include <stdio.h>
#include <stdlib.h>
int main() {
   int num_students, i;
   float marks[100], sum = 0.0, avg;

   printf("Enter the number of students: ");
   scanf("%d", &num_students);

   for (i = 0; i < num_students; i++) {
      printf("Enter the marks of student %d: ", i+1);
      scanf("%f", &marks[i]);
      sum += marks[i];
   }

   // calculate the average
   avg = sum / num_students;

   // print the result
   printf("The average marks of the class is: %.2f\n", avg);

   return 0;
}

