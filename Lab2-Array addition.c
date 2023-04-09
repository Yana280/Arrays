#include <stdio.h>


int main() {
   int size, i;
   
   printf("Enter the size of the arrays: ");
   scanf("%d", &size);
   
   int arr1[size], arr2[size], sum[size];
   
   printf("Enter the elements of the first array:\n");
   for (i = 0; i < size; i++) {
      scanf("%d", &arr1[i]);
   }
   
   printf("Enter the elements of the second array:\n");
   for (i = 0; i < size; i++) {
      scanf("%d", &arr2[i]);
   }
   
   // add the two arrays
   for (i = 0; i < size; i++) {
      sum[i] = arr1[i] + arr2[i];
   }
   
   printf("The sum of the two arrays is:\n");
   for (i = 0; i < size; i++) {
      printf("%d ", sum[i]);
   }
   
   return 0;
}


