#include "onegin.h"

void SortsRowsBegin(struct Lines * ArrayOfLines, int NumberOfLines)
{
    ChecksPointer(ArrayOfLines);

    for(int FirstLine = NumberOfLines; FirstLine > 0; FirstLine--)
    {
        for(int SecondLine = 0; SecondLine < FirstLine - 1; SecondLine++)
        {
            for(int Symbol = 0; Symbol < (ArrayOfLines + SecondLine) -> size; Symbol++)
            {
                if(*((ArrayOfLines + SecondLine) -> line + Symbol) != *((ArrayOfLines + (SecondLine + 1)) -> line + Symbol))
                {
                    if(*((ArrayOfLines + SecondLine) -> line + Symbol) > *((ArrayOfLines + (SecondLine + 1)) -> line + Symbol))
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