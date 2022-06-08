#include <stdio.h>
void printAdd(int a);  
/*  void printAdd(int a){
    printf("The address of i is %u", &a);
}  */
int main(){
    int i = 5;
    printf("The address of i is %u\n", &i);
    printAdd(i);
    return 0;
}
void printAdd(int a){
    printf("The address of i is %u", &a);
}