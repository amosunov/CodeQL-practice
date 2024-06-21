#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFSIZE 256

int main(int argc, char** argv) {
    if (argc != 2) {
        fprintf(stderr, "Error\n");
        return -1; 
    }   

    char* filename = argv[1];

    FILE* fp = fopen(filename, "r");
 
    if (fp == NULL) {
        fprintf(stderr, "Error\n");
        return -1; 
    }   

    if (fclose(fp) != 0) {
        fprintf(stderr, "Error\n");
        return -1; 
    }   

    char cmd[BUFSIZE] = "wc -c < ";
    strncat(cmd, filename, BUFSIZE);
    system(cmd);
    return 0;
}
