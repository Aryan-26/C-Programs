#include <stdio.h>
int factorial(int x);
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int a = n;
    printf("The value of factorial of %d is %d", a, factorial(a));
    return 0;
}
int factorial(int x){
    printf("Calling Factorial(%d)\n", x);   
    if (x==1 || x==0)
    {
       return 1;
    }
    else{
       return x*factorial(x-1);
    }
    
}