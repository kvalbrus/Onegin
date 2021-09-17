#include <stdio.h>

#include "onegin.h"

int main()
{
    FILE * file = fopen(FILENAME, "r");

    return 0;
}

char* readingLines(FILE * file)
{
    char* id;
    while ((const char* line = fgets(file)))
    {
        id = line;
        id++;
    }

    return id;
}
