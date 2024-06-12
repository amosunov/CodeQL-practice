#include <stdio.h>

int main() {
    char last_name[20];
    printf("Enter your last name: ");
    scanf("%s", last_name);
    printf("Entered last name is %s\n", last_name);
}
/*
#include <stdlib.h>
#include <string.h>

#define BUFSIZE 256

// This program prints the size of a specified file in bytes
int main(int argc, char **argv) {
    char cmd[BUFSIZE] = "wc -c ";
    strcat(cmd, argv[1]);
    system(cmd);
}*/
