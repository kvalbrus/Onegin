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

/*!
Reads the characters from the file line by line and writes them to the array of structures, then returns this array
\param[in] File The file from which the lines are read
\param[out] NumberOfLines Number of rows
/return Lines Array of structures in which strings are written
*/
struct Lines * ReadsLines(FILE * File, int * NumberOfLines);

/*!
Checks that the input arguments are correct
\param[in] argc number of arguments
\param[in] argv array of arguments
*/
void ChecksArguments(int argc, char * argv[]);

/*!
Outputs to a file all the strings stored in the ArrayOfLines array
\param[in] ArrayOfLines Array of structures where strings are stored
\param[in] NumberOfLines Number of rows or ArrayOfLines array size
\param[in] OutputFile Output file
*/
void PrintsLines(struct Lines * ArrayOfLines, int NumberOfLines, FILE * OutputFile);

/*!
Checks that the file is not null
\param[in] File File to check
*/
void ChecksFile(FILE * File);

/*!
Sorts rows starting from the beginning of the row
\param[in] ArrayOfLines Array of structures where strings are stored
\param[in] NumberOfLines Number of rows or ArrayOfLines array size
*/
void SortsRowsBegin(struct Lines * ArrayOfLines, int NumberOfLines);

/*!
Sorts rows starting from the end of the row
\param[in] ArrayOfLines Array of structures where strings are stored
\param[in] NumberOfLines Number of rows or ArrayOfLines array size
*/
void SortsRowsEnd(struct Lines * ArrayOfLines, int NumberOfLines);

/*!
Checks the pointer so that it is not null
\param[in] Pointer A pointer to the type of structure Lines to check
*/
void ChecksPointer(struct Lines * Pointer);

/*!
Checks the pointer so that it is not null
\param[in] Pointer The pointer to check
*/
void ChecksPointer(void * Pointer);

/*!
Checks whether the punctuation character is
\param[in] Symbol Input character to check
/return True, if the symbol is punctuation. False otherwise
*/
bool IsPunct(char Symbol);

#endif //ONEGIN_ONEGIN_H