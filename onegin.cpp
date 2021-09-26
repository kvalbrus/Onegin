#include <cstdio>
#include <cstring>
#include <cstdlib>

#include "onegin.h"

int main(int argc, char* argv[])
{

    // открываем файл
    CheckingArguments(argc, argv);
    FILE * file = fopen(*(argv + 1), "r");
    CheckingNullFile(file);

    ReadingLines(file);

    return 0;
}

int ReadingLines(FILE * file)
{
    fseek(file, 0, SEEK_END);
    long long size = ftell(file);
    rewind(file);

    char * symbols = (char *) calloc(size, sizeof(char));
    fread(symbols, sizeof(char), size, file);
    puts("[1]");
    // печать из файла посимвольно
    for(long long i = 0; i < size; i++)
    {
        printf("%c", *(symbols + i));
    }
    puts("[2]");
    puts("");
    int chetchik = 1;
    
    for(long long i = 0; i < size; i++)
    {
        if(*(symbols + i) == '\n') chetchik++;

    }
    puts("[3]");
    char ** ukazatel = (char**) calloc(chetchik, sizeof(char*));
    ukazatel = &symbols;
    puts("[4]");

    for(int i = 0, uk = chetchik; i < size;)
    {
        *(ukazatel + uk) = 1 + strchr(symbols + i, '\n');
        
        i = *(ukazatel + uk) - symbols + 1;
        
        //if(strchr(symbols + i, '\n'))
        //{
        //    printf("%s", (symbols + i + 1));
        //    *(ukazatel + uk) = (symbols + i + 1);
        //    uk++;
        //}
    }
    puts("");
    puts("[5]");

    for(int i = 0; i < chetchik; i++)
    {
        printf("%p\n", ukazatel + i);
    }

    for(int i = 0; i < chetchik; i++)
    {
        printf("%p\n", ukazatel + i);
        printf("%s", *(ukazatel + i));
    }
   
   
   return 0;
}

int CheckingArguments(int argc, char* argv[])
{
    if (argc != 2)
    {
        //вернуть неправльные аргументы и выход
    }
    
    if (*(1 + argv[0]) == 'h')
    {
        // распечатать как пользоваться программой и выход
    }

    
    return 0;// если всё норм, вернуть ОК
}

int CheckingNullFile(FILE * file)
{
    if (file == NULL)
    {
        // вернуть Null  и завершить прогу
    }

    return 0;
    //если всё норм, вренуть ОК
}