#ifndef ONEGIN_ONEGIN_H
#define ONEGIN_ONEGIN_H

#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <ctype.h>

struct Lines
{
    char * line;
    int size;
};

enum StatusFile
{
    CORRECTFILE,
    NULLFILE
};

struct Lines * ReadsLines(FILE * file, int * NumberOfLines);

void ChecksArguments(int argc, char * argv[]);

void PrintsLines(struct Lines * ArrayOfLines, int NumberOfLines, FILE * OutputFile);

void ChecksFile(FILE * file);

void SortsRowsBegin(struct Lines * ArrayOfLines, int NumberOfLines);

void SortsRowsEnd(struct Lines * ArrayOfLines, int NumberOfLines);

void ChecksPointer(char ** pointer);

void ChecksPointer(void * pointer);

#endif //ONEGIN_ONEGIN_H
