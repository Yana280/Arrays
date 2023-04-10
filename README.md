# Arrays
## Addition of arrays
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
![arrayadd](https://user-images.githubusercontent.com/125993593/230862290-c7bf26ca-a130-443b-9536-94ca082cd7da.png)
## Algorithm
1.   start
2.  Declare integer variables size and i.
3.  Prompt the user to enter the size of the arrays.
4.  Read the user's input for size using scanf().
5.  Declare three integer arrays arr1, arr2, and sum with size equal to the user's input.
6.  Prompt the user to enter the elements of the first array.
7.  Read in the elements of the first array using a for loop that iterates from 0 to size - 1 and store each element in the corresponding index of the arr1 array.
8.  Prompt the user to enter the elements of the second array.
9.  Read in the elements of the second array using another for loop that iterates from 0 to size - 1 and store each element in the corresponding index of the arr2       array.
10. Add the two arrays element-wise using a for loop that iterates from 0 to size - 1 and store each sum in the corresponding index of the sum array.
11. Print out the resulting array sum using a for loop that iterates from 0 to size - 1 and print out each element of the array.
12. End the program.

## Average of marks
num_students is an integer variable that is declared here to hold the number of students, 
i is an integer counter variable declared for loops, 
marks is a floating-point array that can hold up to 100 marks, 
sum is a floating-point variable to hold the sum of the marks, and avg is a floating-point variable to hold the average of the marks.
The program then prints out a message asking the user to enter the number of students using the printf function, and reads the value entered by the user into the num_students variable using the scanf function.
the program uses for loop to read in the marks of each student into the marks array. The loop iterates from 0 to num_students-1 .
Within the loop, the program prints a message asking the user to enter the marks for the current student using the printf function, reads the value entered by the user into the marks array using the scanf function, and updates the sum variable to add the current mark to the total sum.
Finally, the program calculates the average by dividing the sum of the marks by the number of students, and stores the result in the avg variable.
It then prints out the average marks to the user using the printf function, and terminates the main function by returning 0. 
The .2f in the format specifier tells the printf function to display the floating-point value of avg with two decimal places.
![Screenshot (222)](https://user-images.githubusercontent.com/125993593/230868741-48800457-6c70-4406-bedc-d91da32f60e6.png)
## Algorithm
1.  Start
2.  Declare integer variables "size", "i", and "sum", and a float variable "avg".
3.  Display "Enter the number of marks: ".
4.  Read the value of "size" from the user.
6.  Declare an integer array "marks" of size "size".
7.  Display "Enter the marks:\n".
8.  Loop "i" from 0 to "size-1".
    a. Read the value of "marks[i]" from the user.
    b. Add "marks[i]" to "sum".
9.  Compute "avg" as "sum/size".
10. Display "The average marks are: <avg>".
11. End.







