/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    // Open file for reading
    fp = fopen("test.txt", "r");

    // Check if file exists
    if (fp == NULL) {
        printf("File not found!\n");
        return 1; // exit program
    }
    

    // Read first character from file
    ch = fgetc(fp);
    printf("First character: %c\n", ch);

    // Close the file
    fclose(fp);

    return 0;
}
