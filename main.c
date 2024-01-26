#include <stdio.h>
float average(int array[], int arraySize);
int main() {
    int array[5] = {10,20,36,40,50};
    int arraySize = sizeof(array) / sizeof(array[0]);
    int *arrayPtr;
    arrayPtr = array;
    printf("Average of array : %.2f", average(arrayPtr, arraySize));

    return 0;
}
float average(int* arrayPtr, int arraySize){
    int sum = 0;
    float avr;
    for (int i = 0; i < arraySize; i++){
        sum += *(arrayPtr+i);
    }
    avr = (float) sum / arraySize;
    return avr;
}