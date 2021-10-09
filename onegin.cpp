#include "onegin.h"

int main(int argc, char* argv[])
{
    ChecksArguments(argc, argv);

    FILE * InputFile = fopen(*(argv + 1), "r");
    FILE * OutputFile = fopen(*(argv + 2), "w");
    
    ChecksFile(InputFile);
    ChecksFile(OutputFile);

    int NumberOfLines = 0;

    struct Lines * ArrayOfLinesNoChange = ReadsLines(InputFile, &NumberOfLines);
    puts("[1]");
    struct Lines * ArrayOfLinesSortsBegin = ArrayOfLinesNoChange;
    puts("[2]");
    struct Lines * ArrayOfLinesSortsEnd = ArrayOfLinesNoChange;
    puts("[3]");
   // char ** ArrayOfLinesNoChanges = ReadsLines(InputFile, &NumberOfLines);
   // char ** ArrayOfLinesSortsBegin = ReadsLines(InputFile, &NumberOfLines);
   // char ** ArrayOfLinesSortsEnd = ReadsLines(InputFile, &NumberOfLines);

    puts("[4]");
    fclose(InputFile);

    puts("[5]");
    SortsRowsBegin(ArrayOfLinesSortsBegin, NumberOfLines);
    SortsRowsEnd(ArrayOfLinesSortsEnd, NumberOfLines);
    
    puts("[6]");
    PrintsLines(ArrayOfLinesSortsBegin, NumberOfLines, OutputFile);
    fprintf(OutputFile, "-------------------------------------\n");
    PrintsLines(ArrayOfLinesSortsEnd, NumberOfLines, OutputFile);
    fprintf(OutputFile, "-------------------------------------\n");
    PrintsLines(ArrayOfLinesNoChange, NumberOfLines, OutputFile);

    fclose(OutputFile);

    return 0;
}