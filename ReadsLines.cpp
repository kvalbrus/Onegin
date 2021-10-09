#include "onegin.h"

struct Lines * ReadsLines(FILE * file, int * NumberOfLines)
{
    ChecksPointer(NumberOfLines);
    
    fseek(file, 0, SEEK_END);
    long long size = ftell(file);
    rewind(file);

    char * buffer = (char *) calloc(size, sizeof(char));
    fread(buffer, sizeof(char), size, file);

    *NumberOfLines = 1;
    
    for(long long symbol = 0; symbol < size; symbol++)
    {
        if(*(buffer + symbol) == '\n')
        {
            *(buffer + symbol) = '\0';
            *NumberOfLines = *NumberOfLines + 1;
        }

    }

    //char ** ArrayOfLines = (char **) calloc(*NumberOfLines, sizeof(char *));
    printf("123\n");
    struct Lines * ArrayOfLines = (struct Lines *) calloc(*NumberOfLines, sizeof(struct Lines *));

    for(int string = 0, symbols = 0, SizeString = 0, p = 0; string < *NumberOfLines; string++)
    {
        for(;!(*(buffer + symbols) == '\0' || *(buffer + symbols) == '\n'); SizeString++, symbols++) {}

        (ArrayOfLines + string) -> line = (buffer + symbols - SizeString);
        (ArrayOfLines + string) -> size = SizeString;

        symbols++;            
        SizeString = 0;

        //printf("%2d %p %s\n", string, (ArrayOfLines + string) -> line, (ArrayOfLines + string) -> line);
        
        
    }

    return ArrayOfLines;
}