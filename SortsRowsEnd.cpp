#include "onegin.h"

void SortsRowsEnd(struct Lines * ArrayOfLines, int NumberOfLines)
{
    ChecksPointer(ArrayOfLines);

    for(int FirstLine = NumberOfLines; FirstLine > 0; FirstLine--)
    {
        for(int SecondLine = 0; SecondLine < FirstLine - 1; SecondLine++)
        {
            for(int SymbolFirstLine = (ArrayOfLines + SecondLine) -> size, SymbolSecondLine = (ArrayOfLines + SecondLine + 1) -> size; 
                    SymbolFirstLine > 0 && SymbolSecondLine > 0; SymbolFirstLine--, SymbolSecondLine--)
            {
                if(*((ArrayOfLines + SecondLine) -> line + SymbolFirstLine) != *((ArrayOfLines + SecondLine + 1) -> line + SymbolSecondLine))
                {
                    if(SymbolFirstLine == (ArrayOfLines + SecondLine) -> size - 1 && ispunct(*((ArrayOfLines + SecondLine) -> line + SymbolFirstLine)))
                    {
                        SymbolFirstLine--;
                    }

                    if(SymbolSecondLine == (ArrayOfLines + (SecondLine + 1)) -> size - 1 && ispunct(*((ArrayOfLines + (SecondLine + 1)) -> line + SymbolSecondLine)))
                    {
                        SymbolSecondLine--;
                    }

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































/*
    for(int FirstLine = NumberOfLines; FirstLine > 0; FirstLine--)
    {
        for(int SecondLine = 0; SecondLine < FirstLine - 1; SecondLine++)
        {
            for(int FirstSymbol = strlen(*(ArrayOfLines)), SecondSymbol = strlen(*(ArrayOfLines + 1)); min(FirstSymbol, SecondSymbol) >= 0; FirstSymbol--, SecondSymbol--)
            {
                if(*(*(ArrayOfLines + SecondLine) + FirstSymbol) == '\0') FirstSymbol--;
                if(*(*(ArrayOfLines + (SecondLine + 1)) + SecondSymbol) == '\0') SecondSymbol--;

                if(FirstSymbol == strlen(*(ArrayOfLines + SecondLine)) && (FirstSymbol == '.' || FirstSymbol == ' ' || FirstSymbol == ',' || FirstSymbol == ';')) FirstSymbol--;
                if(SecondSymbol == strlen(*(ArrayOfLines + (SecondLine + 1))) && (SecondSymbol == '.' || SecondSymbol == ' ' || SecondSymbol == ',' || SecondSymbol == ';')) SecondSymbol--;

                if(*(*(ArrayOfLines + SecondLine) + FirstSymbol) != *(*(ArrayOfLines + (SecondLine + 1)) + SecondSymbol))
                {
                    if(*(*(ArrayOfLines + SecondLine) + FirstSymbol) > *(*(ArrayOfLines + (SecondLine + 1)) + SecondSymbol))
                    {
                        char * TempoparyPointer = *(ArrayOfLines + SecondLine);
                        *(ArrayOfLines + SecondLine) = *(ArrayOfLines + (SecondLine + 1));
                        *(ArrayOfLines + (SecondLine + 1)) = TempoparyPointer;
                    }

                    break;
                }
            }
        }
    } */
