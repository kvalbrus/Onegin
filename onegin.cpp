#include "onegin.h"

int main(int argc, char* argv[])
{
    ChecksArguments(argc, argv);

    FILE * InputFile = fopen(*(argv + 1), "r");
    FILE * OutputFile = fopen(*(argv + 2), "w");
    
    ChecksFile(InputFile);
    ChecksFile(OutputFile);

    int NumberOfLines = 0;

    char ** ArrayOfLinesNoChanges = ReadsLines(InputFile, &NumberOfLines);
    char ** ArrayOfLinesSortsBegin = ReadsLines(InputFile, &NumberOfLines);
    char ** ArrayOfLinesSortsEnd = ReadsLines(InputFile, &NumberOfLines);

    fclose(InputFile);

    SortsRowsBegin(ArrayOfLinesSortsBegin, NumberOfLines);
    SortsRowsEnd(ArrayOfLinesSortsEnd, NumberOfLines);

    PrintsLines(ArrayOfLinesSortsBegin, NumberOfLines, OutputFile);
    PrintsLines(ArrayOfLinesSortsEnd, NumberOfLines, OutputFile);
    PrintsLines(ArrayOfLinesNoChanges, NumberOfLines, OutputFile);

    fclose(OutputFile);

    return 0;
}