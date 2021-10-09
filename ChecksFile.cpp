#include "onegin.h"

void ChecksFile(FILE * File)
{
    if (File == NULL)
    {
        printf("File not found!\n");
        exit(EXIT_SUCCESS);
    }
}