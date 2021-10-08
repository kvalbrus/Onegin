#include "onegin.h"

void ChecksArguments(int argc, char * argv[])
{
    if (argc != 3)
    {
        printf("Use ./[name] <input file> <output file>\n");
        exit(EXIT_SUCCESS);
    }
    
    if (*(*(argv + 1) + 0) == 'h')
    {
        printf("Use ./[name] <input file> <output file>\n");
        exit(EXIT_SUCCESS);
    }
}