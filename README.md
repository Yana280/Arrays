# Arrays
##Addition of arrays
This program takes in the size of two arrays from the user and then takes in the elements of these two arrays.
Then it adds corresponding elements of these two arrays and stores the sum in a third array.
at the wnd it prints out the resulting array which contains the sum of the two input arrays.

we start the program by declaring three integer variables - size, i, and sum. The variable size is used to store the size of the arrays entered by the user, 
variable i is used as a loop counter, and the array sum is used to store the sum of the two arrays.

The program prompts the user to enter the size of the arrays, and the size is read in using the scanf() function. 
Two arrays, arr1 and arr2, are then declared with size equal to the user's input.

The program then prompts the user to enter the elements of the first array, 
these elements are read by using a for loop that iterates through the array using the index i. 
Similarly, the program prompts the user to enter the elements of the second array, and these elements are read in using another for loop.

Next, the program adds the two arrays element-wise using another for loop, and stores the sum of corresponding elements in the third array, sum.

Finally, the program prints out the resulting array, sum, which contains the sum of the two input arrays.
![Screenshot (221)](https://user-images.githubusercontent.com/125993593/230857648-8b194b82-fe1f-42af-a60b-ce6d0f2aff56.png)
##Algorithm
1.  Declare integer variables size and i.
2.  Prompt the user to enter the size of the arrays.
3.  Read the user's input for size using scanf().
4.  Declare three integer arrays arr1, arr2, and sum with size equal to the user's input.
5.  Prompt the user to enter the elements of the first array.
6.  Read in the elements of the first array using a for loop that iterates from 0 to size - 1 and store each element in the corresponding index of the arr1 array.
7.  Prompt the user to enter the elements of the second array.
8.  Read in the elements of the second array using another for loop that iterates from 0 to size - 1 and store each element in the corresponding index of the arr2 array.
9.  Add the two arrays element-wise using a for loop that iterates from 0 to size - 1 and store each sum in the corresponding index of the sum array.
10. Print out the resulting array sum using a for loop that iterates from 0 to size - 1 and print out each element of the array.
11. End the program.






