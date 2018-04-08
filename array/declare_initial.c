#include <stdio.h>

int main() {
    int length, i = 4;
    int *numbers[length] = {1, 2, 3, 4};
    
    for(i=0; i<=length; ++i) 
    {
        printf("the number at index %d: %d\n", i, numbers[i]);
    }
}
