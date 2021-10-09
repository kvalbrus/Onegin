#include "onegin.h"

struct Lines * ReadsLines(FILE * file, int * NumberOfLines)
{
    ChecksPointer(NumberOfLines);
    
    fseek(file, 0, SEEK_END);
    long long size = ftell(file);
    rewind(file);

    char * Buffer = (char *) calloc(size, sizeof(char));
    fread(Buffer, sizeof(char), size, file);

    *NumberOfLines = 1;
    
    for(long long symbol = 0; symbol < size; symbol++)
    {
        if(*(Buffer + symbol) == '\n')
        {
            *(Buffer + symbol) = '\0';
            *NumberOfLines = *NumberOfLines + 1;
        }

    }

    struct Lines * ArrayOfLines = (struct Lines *) calloc(*NumberOfLines, sizeof(struct Lines *));

    for(int string = 0, symbols = 0, SizeString = 0, p = 0; string < *NumberOfLines; string++)
    {
        for(;!(*(Buffer + symbols) == '\0' || *(Buffer + symbols) == '\n'); SizeString++, symbols++) {}

        (ArrayOfLines + string) -> line = (Buffer + symbols - SizeString);
        (ArrayOfLines + string) -> size = SizeString;

        symbols++;            
        SizeString = 0;
    }

    return ArrayOfLines;
}