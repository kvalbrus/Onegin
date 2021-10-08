#include "onegin.h"

void ChecksFile(FILE * file)
{
    if (file == NULL)
    {
        printf("File not found!\n");
        exit(EXIT_SUCCESS);
    }
}