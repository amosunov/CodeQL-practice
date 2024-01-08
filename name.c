#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    FILE* fp = fopen(argv[1], "r");

    if (fp == NULL) {
        printf("Unable to open the file.\n");
        exit(1);
    }   

    fseek(fp, 0L, SEEK_END);
    int sz = ftell(fp);
    printf("%d\n", sz);
    fclose(fp);

    return 0;
}
