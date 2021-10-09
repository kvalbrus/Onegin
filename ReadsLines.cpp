#include "onegin.h"

struct Lines * ReadsLines(FILE * File, int * NumberOfLines)
{
    ChecksPointer(NumberOfLines);
    
    fseek(File, 0, SEEK_END);
    long long Size = ftell(File);
    rewind(File);

    char * Buffer = (char *) calloc(Size, sizeof(char));
    fread(Buffer, sizeof(char), Size, File);

    *NumberOfLines = 1;
    
    for(long long Symbol = 0; Symbol < Size; Symbol++)
    {
        if(*(Buffer + Symbol) == '\n')
        {
            *(Buffer + Symbol) = '\0';
            *NumberOfLines = *NumberOfLines + 1;
        }
    }

    struct Lines * ArrayOfLines = (struct Lines *) calloc(*NumberOfLines, sizeof(struct Lines *));

    for(int String = 0, Symbols = 0, SizeString = 0; String < *NumberOfLines; String++)
    {
        for(;!(*(Buffer + Symbols) == '\0' || *(Buffer + Symbols) == '\n'); SizeString++, Symbols++) {}

        (ArrayOfLines + String) -> line = (Buffer + Symbols - SizeString);
        (ArrayOfLines + String) -> size = SizeString;

        Symbols++;            
        SizeString = 0;
    }

    return ArrayOfLines;
}