#include "onegin.h"

int ReadingLines(FILE * file)
{
    fseek(file, 0, SEEK_END);
    long long size = ftell(file);
    rewind(file);

    char * symbols = (char *) calloc(size, sizeof(char));
    fread(symbols, sizeof(char), size, file);
    puts("[1]");//

    puts("[2]");//
    puts("");//
    int chetchik = 1;
    
    for(long long i = 0; i < size; i++)
    {
        if(*(symbols + i) == '\n') 
        {
            *(symbols + i) = '\0';
            chetchik++;
        }

    }

    puts("[3]");
    char ** ukazatel = (char **) calloc(chetchik, sizeof(char *));
    char ** ab = (char **) calloc(chetchik, sizeof(char *));
    //*(ukazatel + 0) = symbols;

    puts("[4]");//

    char * j;
    for(int i = 0, p = 0; i < chetchik; i++)
    {
        puts("[4.1]");
        if (i == 0) 
        {
            *(ukazatel + i) = symbols;
            
            //continue;
        }
        else
        {
            j = strchr(symbols + p, '\0');
            *(ukazatel + i) = j + 1;
            *j = '\0';

            p = j - symbols + 1;
        }

      //  ukazatel[uk] = (1 + strchr(symbols + i, '\n'));
      //  i = ukazatel[uk] - symbols + 1;
    }

    printf("%d\n", chetchik);
    puts("[5]");//
   
    for(int i = 0; i < chetchik; i++)
    {
        puts("[5.0.1]");
        printf("%s\n", *(ukazatel + i));

    }
    puts("[5.1]");//

    ab = SortsRows(ukazatel, chetchik);

    puts("[6]");//
    for(int i = 0; i < chetchik; i++)
    {
        printf("%s\n", *(ukazatel + i));
    }
   
    return 0;
}