#include "onegin.h"

void PrintsLines(struct Lines * ArrayOfLines, int NumberOfLines, FILE * OutputFile)
{
    puts("12");
    ChecksPointer(ArrayOfLines);
    puts("23");
    ChecksFile(OutputFile);
    
    fputs("\n", OutputFile);
    for(int string = 0; string < NumberOfLines; string++)
    {
        fprintf(OutputFile, "%s\n", ((ArrayOfLines + string) -> line));
    }
}