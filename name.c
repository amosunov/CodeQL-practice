#include <stdio.h> 
#include <stdlib.h>

int main() {
    char buffer[10];
    printf("Enter an integer representing degrees in Celcius: ");
    fgets(buffer, 10, stdin); 
    int c = atoi(buffer); 
    printf("%d degrees Celcius approximates to %d degrees Fahrenheit.\n", c, (int) (1.8*((double) c) + 32.0)); 
} 
