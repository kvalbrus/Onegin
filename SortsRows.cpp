#include "onegin.h"

char ** SortsRows(char ** ukazatel, int lines)
{
    puts("[5.1.1]");//

   // char ** sorting = (char **) calloc(lines, sizeof(char *));

    puts("[5.1.2]");//
    Strlen(*(ukazatel + 0 * sizeof(char)));
    puts("[5.1.3]");//

   // printf("%s\n", *ukazatel);

    for(int i = 0; i < lines; i++)
    {
        printf("%s\n", *(ukazatel + i));//
    }

    for(int i = lines; i > 0; i--)
    {
        puts("[5.1.3.1]");//
        for(int j = 0; j < i - 1; j++)
        {
            puts("[5.1.3.2]");//

            for(int h = 0; h < Strlen(*(ukazatel + h)); h++)
            {
                puts("[5.1.4+]");//

                if(*(*(ukazatel + j) + h) != *(*(ukazatel + j + 1) + h))
                {
                    puts("[5.1.5]");//

                    if(*(*(ukazatel + j) + h) > *(*(ukazatel + j + 1) + h))
                    {
                        puts("[5.1.6]");//
                        char * a = *(ukazatel + j);
                        *(ukazatel + j) = *(ukazatel + (j + 1));
                        *(ukazatel + (j + 1)) = a;

                    }

                    break;
                }
            }
        }
    }   

    return ukazatel;
}