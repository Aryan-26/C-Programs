#include <stdio.h>
    void goodmorning();
    void goodafternoon();
    void goodnight();
int main(){
    goodmorning();
    return 0;
}   

void goodmorning(){
    printf("Good Morning Aryan\n");
    goodafternoon();
}
void goodafternoon(){
    printf("Good Afternoon Aryan\n");
    goodnight();
}
void goodnight(){
    printf("Good Night Aryan");
}