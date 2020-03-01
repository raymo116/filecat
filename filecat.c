// #include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <fcntl.h> // for open
#include <unistd.h> // for close
#include <errno.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    if (argc == 1) {
        printf("You must include an input and an output file as arguments\n");
        return 1;
    }
    else if (argc == 2) {
        printf("You must include an output file as an argument\n");
        return 1;
    }

    if (access(argv[1], R_OK) == -1) {
        printf("You don not have permission to read from the first file\n");
        return 1;
    }
    else if (access(argv[2], W_OK) == -1) {
        printf("You do not have permission to write to the second file\n");
        return 1;
    }

    int sourceFile = open(argv[1], O_RDONLY);
    int destinationFile = open(argv[2], O_WRONLY | O_APPEND);

    int fileSize = lseek(sourceFile, 0L, SEEK_END);
    // int fileSize = ltell(sourceFile);
    lseek(sourceFile, 0L, SEEK_SET);

    char* c = malloc(fileSize * sizeof(char));

    read(sourceFile,c,fileSize);
    write(destinationFile,c,fileSize);

    close(sourceFile);
    close(destinationFile);

    return 0;
}
