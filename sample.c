#include <stdio.h>
#include <stdlib.h>

// This program prints the size of a specified file in bytes
int main(int argc, char** argv) 
{
    // Ensure that the user supplied exactly one command line argument
    if (argc != 2) 
    {
        fprintf(stderr, "Please provide the address of a file as an input.\n");
        return -1;
    }

    // Open the file in read mode
    FILE *file = fopen(argv[1], "r");
    if (file == NULL) {
        perror("Error opening file");
        return -1;
    }

    // Seek to the end of the file to determine its size
    fseek(file, 0, SEEK_END);
    long size = ftell(file);
    // Close the file
    fclose(file);

    // Check if the size was determined successfully
    if (size == -1) {
        perror("Error determining file size");
        return -1;
    }

    // Print the size of the file
    printf("The size of the file is: %ld bytes\n", size);

    return 0;
}

/*#include <stdio.h>
int main() {
	char last_name[20];
	printf ("Enter your last name: ");
	scanf ("%s", last_name);
	printf("Entered last name is %s\n", last_name);
}*/
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
