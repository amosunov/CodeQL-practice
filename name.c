#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    FILE* fp = fopen(argv[1], "r");
    fseek(fp, 0L, SEEK_END);
    int sz = ftell(fp);
    printf("%d\n", sz);
    fclose(fp);
}
