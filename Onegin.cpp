#include "onegin.h"

int main(int argc, char* argv[])
{
    ChecksArguments(argc, argv);

    FILE * InputFile = fopen(*(argv + 1), "r");
    FILE * OutputFile = fopen(*(argv + 2), "w");
    
    ChecksFile(InputFile);
    ChecksFile(OutputFile);

    int NumberOfLines = 0;

    struct Lines * ArrayOfLines = ReadsLines(InputFile, &NumberOfLines);

    fclose(InputFile);

    PrintsLines(ArrayOfLines, NumberOfLines, OutputFile);
    fprintf(OutputFile, "-------------------------------------\n");

    SortsRowsBegin(ArrayOfLines, NumberOfLines);
    PrintsLines(ArrayOfLines, NumberOfLines, OutputFile);
    fprintf(OutputFile, "-------------------------------------\n");
    
    SortsRowsEnd(ArrayOfLines, NumberOfLines);
    PrintsLines(ArrayOfLines, NumberOfLines, OutputFile);
      
    fclose(OutputFile);

    return 0;
}