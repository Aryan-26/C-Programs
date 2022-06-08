// hint:
// fib(n) = fib(n-1) + fib(n-2)
// fib(1) = 0
// fib(2) = 1 
#include <stdio.h>
int fib(int n);
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int a = n;
    printf("The expected term in fibonacci series is %d", fib(a));
    return 0;
}
int fib(int n){
    // printf("fib(%d)", n);
    if (n == 1)
    {
      return 0;
    }
    else if (n==2)
    {
        return 1;
    }
    // else if (n==3){
    //     return 1;
    // }
    else
    {
        return (fib(n-1) + fib(n-2));
    }   
}