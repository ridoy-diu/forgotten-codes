/// write a program to modify a file containing an integer to double its value using c

#include <stdio.h>

int main()
{
    FILE *file;
    int number;

    // Open the file in read mode
    file = fopen("input.txt", "r");

    if (file == NULL)
    {
        printf("Error opening the file for reading.\n");
        return 1; // Exit the program with an error code
    }

    // Read the integer from the file
    fscanf(file, "%d", &number);

    // Close the file after reading
    fclose(file);

    // Double the value
    number *= 2;

    // Open the same file in write mode (this will overwrite the existing content)
    file = fopen("input.txt", "w");

    if (file == NULL)
    {
        printf("Error opening the file for writing.\n");
        return 1; // Exit the program with an error code
    }

    // Write the modified value back to the file
    fprintf(file, "%d", number);

    // Close the file after writing
    fclose(file);

    printf("Value doubled and written to the file successfully.\n");

    return 0;
}
