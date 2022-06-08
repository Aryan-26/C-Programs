#include <stdio.h>
float force(float mass);
int main(){
    float mass;
    printf("Enter the value of mass in kg: ");
    scanf("%f", &mass);
    printf("The force of attraction due to gravity in newton is %.3f", force(mass));    
    return 0;
}
float force(float mass){
    float result;
    result = mass*9.81;
    return result;
}