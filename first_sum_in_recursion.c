#include <stdio.h>
int sum(int x);
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int a = n;
    printf("The sum of first %d natural numbers is %d", n, sum(a));
    return 0;
}
int sum(int x){
    if(x==1){
        return 1;
    }
    else
    {
        return x + sum(x-1);
    }
    
}