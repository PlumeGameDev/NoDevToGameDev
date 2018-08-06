#include <stdio.h>

int main(){
    int ourArray[4]; // 4 elements in our array, 4 integers

    ourArray[0] = 56; //index 0 element 1
    ourArray[1] = 6;
    ourArray[2] = 2;
    ourArray[3] = 77;

    printf("%d\n", ourArray[0]); // printing an element

    char ourString[4];
    ourString[0] = 116;
    ourString[1] = 104;
    ourString[2] = 101;
    ourString[3] = 0;

    printf("%s\n", ourString);

    return 0;
}
