#include <stdio.h>
void SumandAverage(int a, int b, float *sum, float *average){
     *sum = a+b;
     *average = *sum/2;
}
int main(){
    int i, j;
    float average, sum;
    printf("Enter the value of a: ");
    scanf("%d", &i);
    printf("Enter the value of b: ");
    scanf("%d", &j);
    SumandAverage(i, j, &sum, &average);
    printf("The sum of the given numbers is %.2f\n", sum);
    printf("The sum of the given numbers is %.3f", average);
    return 0;
}