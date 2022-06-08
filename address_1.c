#include <stdio.h>

int main(){
    int a = 45;
    int *j = &a;
    printf("The address of the variable a is %u\n", j);
    printf("The value of the variable a is %d", *j);
    return 0;
}