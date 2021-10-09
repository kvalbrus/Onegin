#include "onegin.h"

void SortsRowsBegin(char ** ArrayOfLines, int NumberOfLines)
{
    ChecksPointer(ArrayOfLines);

    for(int FirstLine = NumberOfLines; FirstLine > 0; FirstLine--)
    {
        for(int SecondLine = 0; SecondLine < FirstLine - 1; SecondLine++)
        {

            for(int symbol = 0; symbol < strlen(*(ArrayOfLines + symbol)); symbol++)
            {

                if(*(*(ArrayOfLines + SecondLine) + symbol) != *(*(ArrayOfLines + (SecondLine + 1)) + symbol))
                {

                    if(*(*(ArrayOfLines + SecondLine) + symbol) > *(*(ArrayOfLines + (SecondLine + 1)) + symbol))
                    {
                        char * TempoparyPointer = *(ArrayOfLines + SecondLine);
                        *(ArrayOfLines + SecondLine) = *(ArrayOfLines + (SecondLine + 1));
                        *(ArrayOfLines + (SecondLine + 1)) = TempoparyPointer;

                    }

                    break;
                }
            }
        }
    }   
}