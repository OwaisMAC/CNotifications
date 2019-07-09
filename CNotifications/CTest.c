//
//  CTest.c
//  CNotifications
//
//  Created by Owais Munawar on 3/20/19.
//  Copyright © 2019 The Dev. All rights reserved.
//

#include "CTest.h" 

int pingValue = -1;
/* Main program: Using the various functions */
//int main (void) {
//    square1();    /* Calling the square1 function */
//    square2(7);   /* Calling the square2 function using 7 as actual
//                   parameter corresponding to the formal parameter i */
//    printf("The value of square3() is %d\n", square3()); /* Ysing the square3
//                                                          function */
//    printf("The value of square4(5) is %d\n", square4(5)); /* Using the square4
//                                                            function with 5 as actual parameter corresponding to i */
//    printf("The value of area(3,7) is %d\n", area(3,7)); /* Using the area
//                                                          function with 3, 7 as actual parameters corresponding
//                                                          to b, h respectively */
//}

/* Definitions of the functions */

/* Function that reads from standard input an integer and prints
 it out together with its sum */
void square1(void){
    int x;
    
    printf("Please enter an integer > ");
    scanf("%d", &x);
    printf("The square of %d is %d\n", x, x*x);
}

/* Function that prints i together with its sum */
void square2(int i){
    printf("The square of %d is %d\n", i, i*i);
}

/* Function that reads from standard input an integer and returns
 its square */
int square3(void){
    int x;
    printf("Please enter an integer > ");
    scanf("%d", &x);
    return (x*x);
}

/* Function that returns the square of i */
int square4(int i){
    pingValue = i*i;
    return (pingValue);
}

int getPingValue(void){
    return pingValue;
}

/* Function that returns the area of the rectangle with base b
 and hight h */
int area(int b, int h){
    return (b*h);
}

/* The output of this program is:
 
 Please enter an integer > 3
 The square of 3 is 9
 The square of 7 is 49
 Please enter an integer > 4
 The value of square3() is 16
 The value of square4(5) is 25
 The value of area(3,7) is 21
 
 */
