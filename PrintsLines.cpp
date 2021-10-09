#include "onegin.h"

void PrintsLines(struct Lines * ArrayOfLines, int NumberOfLines, FILE * OutputFile)
{
    ChecksPointer(ArrayOfLines);
    ChecksFile(OutputFile);
    
    for(int string = 0; string < NumberOfLines; string++)
    {
        fprintf(OutputFile, "%s\n", ((ArrayOfLines + string) -> line));
    }
}