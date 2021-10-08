#include "onegin.h"

char ** ReadsLines(FILE * file, int *NumberOfLines)
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

    char ** ArrayOfLines = (char **) calloc(*NumberOfLines, sizeof(char *));

    for(int line = 0, p = 0; line < *NumberOfLines; line++)
    {
        if (line == 0) 
        {
            *(ArrayOfLines + line) = buffer;
        }
        else
        {
            *(ArrayOfLines + line) = strchr(buffer + p, '\0') + 1;
            *(strchr(buffer + p, '\0')) = '\0';

            p = strchr(buffer + p, '\0') - buffer + 1;
        }
    }
   
    return ArrayOfLines;
}