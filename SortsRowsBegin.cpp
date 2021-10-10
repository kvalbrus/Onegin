#include "onegin.h"

void SortsRowsBegin(struct Lines * ArrayOfLines, int NumberOfLines)
{
    ChecksPointer(ArrayOfLines);

    for(int FirstLine = NumberOfLines; FirstLine > 0; FirstLine--)
    {
        for(int SecondLine = 0; SecondLine < FirstLine - 1; SecondLine++)
        {
            for(int SymbolFirstLine = 0, SymbolSecondLine = 0; 
                SymbolFirstLine < (ArrayOfLines + SecondLine) -> size && SymbolSecondLine < (ArrayOfLines + (SecondLine + 1)) -> size;
                SymbolFirstLine++, SymbolSecondLine++)
            {
                while(IsPunct(*((ArrayOfLines + SecondLine) -> line + SymbolFirstLine)))
                {
                    SymbolFirstLine++;
                }

                while(IsPunct(*((ArrayOfLines + (SecondLine + 1)) -> line + SymbolSecondLine)))
                {
                    SymbolSecondLine++;
                }

                if(*((ArrayOfLines + SecondLine) -> line + SymbolFirstLine) != *((ArrayOfLines + (SecondLine + 1)) -> line + SymbolSecondLine))
                {
                    if(*((ArrayOfLines + SecondLine) -> line + SymbolFirstLine) > *((ArrayOfLines + (SecondLine + 1)) -> line + SymbolSecondLine))
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