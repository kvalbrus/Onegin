#include "onegin.h"

void SortsRowsBegin(struct Lines * ArrayOfLines, int NumberOfLines)
{
    ChecksPointer(ArrayOfLines);

    for(int FirstLine = NumberOfLines; FirstLine > 0; FirstLine--)
    {
        for(int SecondLine = 0; SecondLine < FirstLine - 1; SecondLine++)
        {
            for(int symbol = 0; symbol < (ArrayOfLines + SecondLine) -> size; symbol++)
            {
                if(*((ArrayOfLines + SecondLine) -> line + symbol) != *((ArrayOfLines + (SecondLine + 1)) -> line + symbol))
                {
                    if(*((ArrayOfLines + SecondLine) -> line + symbol) > *((ArrayOfLines + (SecondLine + 1)) -> line + symbol))
                    {
                        struct Lines TempoparyPointer = *(ArrayOfLines + SecondLine);
                        
                        *(ArrayOfLines + SecondLine) = *(ArrayOfLines + (SecondLine + 1));
                        *(ArrayOfLines + (SecondLine + 1)) = TempoparyPointer;
                    }

                    break;
                }
            }
        }
    }   
}