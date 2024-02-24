#include <stdio.h>
#include <stdlib.h>

#define BUFSIZE 256

int main(int argc, char** argv) {
    char cmd[BUFSIZE] = "wc -c < ";
    strcat(cmd, argv[1]);
    system(cmd);
}
