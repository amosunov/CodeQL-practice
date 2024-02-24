#include <stdio.h>

// This program prints the size of a specified file in bytes
int main(int argc, char** argv) {
    // opening the file in read mode 
    FILE* fp = fopen(argv[1], "r"); 
  
    // checking if the file exist or not 
    if (fp == NULL) { 
        printf("File not found\n"); 
        return -1; 
    }   
  
    fseek(fp, 0L, SEEK_END); 
  
    // calculating the size of the file 
    long size = ftell(fp); 
    printf("%ld\n", size); 
 
    // closing the file 
    fclose(fp); 
}
