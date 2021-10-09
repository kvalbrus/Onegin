#ifndef ONEGIN_ONEGIN_H
#define ONEGIN_ONEGIN_H

#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>

enum StatusFile
{
    CORRECTFILE,
    NULLFILE
};

char ** ReadsLines(FILE * file, int * NumberOfLines);

void ChecksArguments(int argc, char * argv[]);

void PrintsLines(char ** ArrayOfLines, int NumberOfLines, FILE * PutputFile);

void ChecksFile(FILE * file);

void SortsRowsBegin(char ** ArrayOfLines, int NumberOfLines);

void SortsRowsEnd(char ** ArrayOfLines, int NumberOfLines);

void ChecksPointer(char ** pointer);

void ChecksPointer(void * pointer);

int min(int a, int b);

//size_t Strlen(const char* str);

#endif //ONEGIN_ONEGIN_H
