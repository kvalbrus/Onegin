#include "onegin.h"

void PrintsLines(struct Lines * ArrayOfLines, int NumberOfLines, FILE * OutputFile)
{
    ChecksPointer(ArrayOfLines);
    ChecksFile(OutputFile);
    
    for(int String = 0; String < NumberOfLines; String++)
    {
        fprintf(OutputFile, "%s\n", ((ArrayOfLines + String) -> line));
    }
}