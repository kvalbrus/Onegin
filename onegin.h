#ifndef ONEGIN_ONEGIN_H
#define ONEGIN_ONEGIN_H

#include <cstdio>
#include <cstring>
#include <cstdlib>

int ReadingLines(FILE * file);

int CheckingArguments(int argc, char* argv[]);

int CheckingNullFile(FILE * file);

char ** SortsRows(char ** ukazatel, int lines);

size_t Strlen(const char* str);

#endif //ONEGIN_ONEGIN_H
