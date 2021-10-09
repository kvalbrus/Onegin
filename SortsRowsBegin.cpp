#include "onegin.h"

void SortsRowsBegin(struct Lines * ArrayOfLines, int NumberOfLines)
{
    ChecksPointer(ArrayOfLines);

    for(int FirstLine = NumberOfLines; FirstLine > 0; FirstLine--)
    {
       /// puts("{1}");
        for(int SecondLine = 0; SecondLine < FirstLine - 1; SecondLine++)
        {
          ///  puts("{1.1}");
            for(int symbol = 0; symbol < (ArrayOfLines + SecondLine) -> size; symbol++)
            {
               /// puts("{1.1.1}");
              ///  printf("%d\n", SecondLine);//
              ///  printf("%s\n", (ArrayOfLines + SecondLine) -> line);//

                if(*((ArrayOfLines + SecondLine) -> line + symbol) != *((ArrayOfLines + (SecondLine + 1)) -> line + symbol))
                {
                   /// puts("{1.1.1.1}");
                    

                    if(*((ArrayOfLines + SecondLine) -> line + symbol) > *((ArrayOfLines + (SecondLine + 1)) -> line + symbol)) //*(*(ArrayOfLines + SecondLine) + symbol) > *(*(ArrayOfLines + (SecondLine + 1)) + symbol))
                    {
                      /// puts("{1.1.1.2}");
                        struct Lines TempoparyPointer = *(ArrayOfLines + SecondLine);
                        //char * TempoparyPointer = *(ArrayOfLines + SecondLine);
                        
                        *(ArrayOfLines + SecondLine) = *(ArrayOfLines + (SecondLine + 1));
                        *(ArrayOfLines + (SecondLine + 1)) = TempoparyPointer;
                       // *(ArrayOfLines + SecondLine) = *(ArrayOfLines + (SecondLine + 1));
                       // *(ArrayOfLines + (SecondLine + 1)) = TempoparyPointer;

                    }

                    break;
                }
            }
        }
    }   
}