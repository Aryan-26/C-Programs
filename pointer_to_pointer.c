#include <stdio.h>

int main(){
    int i, *ptr, **ptr_ptr;
    printf("Enter the value of i: ");
    scanf("%d", &i);
    ptr = &i;
    ptr_ptr = &ptr;
    printf("The value of i is %d", **ptr_ptr);
    return 0;
}