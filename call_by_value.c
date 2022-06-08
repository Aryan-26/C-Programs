#include <stdio.h>
int sum(int a, int b);
int main(){
    int x=4, y=7;
    printf("The value of x and y is %d and %d\n", x, y);
    printf("The value of x+y is %d\n", sum(x,y));
    printf("The value of x and y after function call is %d and %d", x, y);
    return 0;
}
/* In call by calue we cannot change the value of x and y with the use of function
 only we cannot change the variayle of main without pointer */
/* In second printf statement firstly x and y are copied and come to call 
y value function */
/* Dost ke notes leke xerox karake agar xerox copy faad di toh dost ke notes 
pe koi farak nhi padega */
int sum(int a, int b){
    int c = a+b;
    a = 4567;
    b = 8956;
    return c;
}