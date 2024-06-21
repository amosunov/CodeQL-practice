#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    if (argc != 2) {
        fprintf(stderr, "error\n");
        return -1; 
    }   

    FILE *file = fopen(argv[1], "rb");
    if (file == NULL) {
        perror("Error\n");
        return -1; 
    }   

    if (fseek(file, 0, SEEK_END) != 0) {
        perror("Error\n");
        fclose(file);
        return -1; 
    }   

    long fileSize = ftell(file);
    if (fileSize == -1) {
        perror("Error\n");
        fclose(file);
        return -1; 
    }   

    fclose(file);

    printf("Size of the file is: %ld bytes\n", fileSize);
    return 0;
}
