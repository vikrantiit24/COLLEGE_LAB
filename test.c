// a. Write a program to calculate perimeter of rectangle.
// Take sides, a & b, from the user.

// b. Take a number(n) from user & output its cube(n*n*n).

// c. Write comments for programs a & b.
#include<stdio.h>

int main(){
    // int length , breadth;
    // printf("enter length:\n");
    // scanf("%d",&length);
    // printf("enter breadth:\n");
    // scanf("%d",&breadth);
    // printf("the perimeter of the rectangle is %d",2 * (length + breadth));
    // return 0;
    //---------------------------------------------------------------------------------
    // b. Take a number(n) from user & output its cube(n*n*n)
    /*int x;
    printf("Enter number:\n");
    scanf("%d",&x);
    printf("the cube of the number is %d",x*x*x);
    */
    //---------------------------------------------------------------------------------
    //Write a program to print the average of 3 numbers.
 
    // int x, y, z;  // Corrected the declaration of variables

    // printf("Enter x:\n");  // Corrected 'print' to 'printf'
    // scanf("%d", &x);       // Reads the value of x

    // printf("Enter y:\n");  // Corrected 'print' to 'printf'
    // scanf("%d", &y);       // Reads the value of y

    // printf("Enter z:\n");  // Corrected 'print' to 'printf'
    // scanf("%d", &z);       // Reads the value of z

    // printf("The average of three numbers is %d\n", (x + y + z) / 3);  // Computes and prints the average

    // return 0; 
 //---------------------------------------------------------------------------------
 /* Write a program to check if given character is digit
or not */
// char ch;
// printf("Enter the character :");
// scanf("%c", &ch);
// ch >='0' && ch <= '9'?
// printf("this is a %c is a character ",ch):
// printf("this is not a %c is a character ",ch);
// return 0;
//---------------------------------------------------------------------------------
// Write a program to print the smallest number of two.
// int a,b;
// printf("Enter the number :");
// scanf("%d", &a);
// printf("Enter the second number :");
// scanf("%d", &b); 
// printf("the greater number among them is %d", (a > b) ? a : b );
// return 0;
//---------------------------------------------------------------------------------
//[print the numbers of o to n if given n by the user ]
// int n ,i ;
// printf("Till where you want to print: ");
//     scanf("%d", &n); 
// for(i = 1 ; i < n ; i++){
//     printf("%d \n",i);
// }
//  printf("\n");

// return 0;
//---------------------------------------------------------------------------------
//[this is the program to print the sum of first n natural numbers]
// int sum , n;
// printf("Enter a number ");
// scanf("%d", &n);
// for (int i=0 ; i<n ; i++){
//     sum+=i;
//     printf("%d", sum);
//     return 0;

// }
//---------------------------------------------------------------------------------
// int n;
// printf("enter the number :");
// scanf("%d", &n);
// int sum =0;
// for(int i = 1 ; j = n ; i <= n && j>=1 ; i++ ; j-- ){
//     sum+=i;
//     printf("%d", j);

// }
// printf("the sum of first n natural numbers is %d\n",sum);
//---------------------------------------------------------------------------------
//this is the program to print the table 
// int n ;
// printf("enter the number");
// scanf("%d", &n);
// for(int i=1 ; i<=10 ; i++){
//     printf("%d\n",n*i);
// }

char s[100];
    scanf("%[^\n]", s);
    printf("Hello, World!\n");
    printf("%s\n", s);
    return 0;

 }