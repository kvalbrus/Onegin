#include "onegin.h"

void PrintsLines(char ** ArrayOfLines, int NumberOfLines, FILE * OutputFile)
{
    ChecksPointer(ArrayOfLines);
    ChecksFile(OutputFile);

    for(int line = 0; line < NumberOfLines; line++)
    {
        fprintf(OutputFile, "%s\n", *(ArrayOfLines + line));
    }
}