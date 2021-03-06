/*
* @name: filecat.c
* @author: Matt Raymond
* @email: raymo116@mail.chapman.edu
* @id: 2270559
* @date: 03/01/2020
* @version: 1.0
*/

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*
* This program will take two files as command-line arguments,
* appending the contents of the first file onto the end of
* the second file. It performs error checks along the way to
* make sure that everything works correctly
*/
int main(int argc, char *argv[]) {

    // Gives error message and exits if there are no file names given
    if (argc == 1) {
        printf("You must include an input and an output file as arguments\n");
        return 1;
    }

    // Gives error message and exits if there is only one file name given
    else if (argc == 2) {
        printf("You must include an output file as an argument\n");
        return 1;
    }

    // Checks to make sure that the user has read permissions for the source file
    if (access(argv[1], R_OK) == -1) {
        printf("You don not have permission to read from the first file\n");
        return 1;
    }

    // Checks to make sure that the user has write permissions for the destination file
    if (access(argv[2], W_OK) == -1) {
        printf("You do not have permission to write to the second file\n");
        return 1;
    }

    // Opens the files and saves the file ids
    int sourceFile = open(argv[1], O_RDONLY);
    int destinationFile = open(argv[2], O_WRONLY | O_APPEND);

    // Checks to make sure that file was opened correctly
    if (sourceFile == -1) {
        printf("There was an error opening the first file\n");
        return 1;
    }

    // Checks to make sure that the second file was opened correctly
    if (destinationFile == -1) {
        printf("There was an error opening the second file\n");
        return 1;
    }

    // Creates a single char
    char* singleChar = malloc(sizeof(char));

    // Goes through the entire file and reads/appends
    while (read(sourceFile,singleChar,1)) {
        write(destinationFile,singleChar,1);
    }

    // Closes the files
    close(sourceFile);
    close(destinationFile);

    // Frees the memory from the character pointer
    free(singleChar);

    return 0;
}
