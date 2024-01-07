#include <string.h>
#include <stdlib.h>

#define CMD_MAX 256

int main(int argc, char** argv) {
    char cmd[CMD_MAX] = "/bin/cat ";
    strcat(cmd, argv[1]);
    system(cmd);
}
