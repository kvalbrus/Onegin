#ifndef ONEGIN_ONEGIN_H
#define ONEGIN_ONEGIN_H

int ReadingLines(FILE * file);

int CheckingArguments(int argc, char* argv[]);

int CheckingNullFile(FILE * file);

char ** SortsStringsAlphavit(char ** ukazatel, int lines);

size_t Strlen(const char* str);

#endif //ONEGIN_ONEGIN_H
