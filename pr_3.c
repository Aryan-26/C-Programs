#include <stdio.h>
void tenTimes(int a, int *ten){
    *ten = 10*a;
}
int main(){
    int i, ten;
    printf("Enter the value of a: ");
    scanf("%d", &i);
    tenTimes(i, &ten);
    printf("Ten times the value of the given number is %d", ten);
    return 0;
}