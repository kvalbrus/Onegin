#include "onegin.h"

void SortsRowsBegin(char ** ArrayOfLines, int NumberOfLines)
{
    ChecksPointer(ArrayOfLines);

    for(int i = NumberOfLines; i > 0; i--)
    {
        for(int j = 0; j < i - 1; j++)
        {

            for(int h = 0; h < strlen(*(ArrayOfLines + h)); h++)
            {

                if(*(*(ArrayOfLines + j) + h) != *(*(ArrayOfLines + (j + 1)) + h))
                {

                    if(*(*(ArrayOfLines + j) + h) > *(*(ArrayOfLines + (j + 1)) + h))
                    {
                        char * a = *(ArrayOfLines + j);
                        *(ArrayOfLines + j) = *(ArrayOfLines + (j + 1));
                        *(ArrayOfLines + (j + 1)) = a;

                    }

                    break;
                }
            }
        }
    }   
}