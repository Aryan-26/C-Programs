#include <stdio.h>
// Sum is function which takes a and b as input and returns an integer as an output. 
int sum(int a, int b);   //Funtion Prototype declaration
int main(){
    int c;
    c = sum(2, 15);   //Function Call
    printf("The value of c is %d", c);
    return 0;
}
int sum (int a, int b){
    int result;   //Here we can write any variable other than result
    result = a + b;
    return result;
}