#include <cstdio>
#include <cstring>
#include <cstdlib>

#include "onegin.h"

int main(int argc, char* argv[])
{

    // открываем файл
    CheckingArguments(argc, argv);
    FILE * file = fopen(*(argv + 1), "r");
    
    if(!CheckingNullFile(file)) return 1;

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
    puts("[1]");//

    puts("[2]");//
    puts("");//
    int chetchik = 1;
    
    for(long long i = 0; i < size; i++)
    {
        if(*(symbols + i) == '\n') chetchik++;

    }

    puts("[3]");
    char ** ukazatel = (char **) calloc(chetchik, sizeof(char *));
    char ** ab = (char **) calloc(chetchik, sizeof(char *));
    ukazatel[0] = symbols;

    puts("[4]");//

    char * j;
    for(int i = 0, p = 0; i < chetchik; i++)
    {
        puts("[4.1]");
        if (i == 0) 
        {
            ukazatel[i] = symbols;
            continue;
        }
        else
        {
            j = strchr(symbols + p, '\n');
            ukazatel[i] = j + 1;
            *j = '\0';
        }

      //  ukazatel[uk] = (1 + strchr(symbols + i, '\n'));
      //  i = ukazatel[uk] - symbols + 1;
    }

    printf("%d\n", chetchik);
    puts("[5]");//

    for(int i = 0; i < chetchik; i++)
    {
        puts("[5.0.1]");
        printf("%s\n", ukazatel[i]);

    }
    puts("[5.1]");//

    ab = SortsStringsAlphavit(ukazatel, chetchik);

    puts("[6]");//
    for(int i = 0; i < chetchik; i++)
    {
        printf("%s\n", ukazatel[i]);
    }
   
    return 0;
}

int CheckingArguments(int argc, char * argv[])
{
    if (argc != 2)
    {
        //вернуть неправльные аргументы и выход
    }
    
    if (*(1 + argv[0]) == 'h')
    {
        // распечатать как пользоваться программой и выход
    }
    
    return 0; // если всё норм, вернуть ОК
}

int CheckingNullFile(FILE * file)
{
    if (file == NULL)
    {
        return 0;
    }

    return 1;
    //если всё норм, вренуть ОК
}

char ** SortsStringsAlphavit(char ** ukazatel, int lines)
{
    puts("[5.1.1]");//

   // char ** sorting = (char **) calloc(lines, sizeof(char *));

    puts("[5.1.2]");//
    Strlen(*(ukazatel + 0 * sizeof(char)));
    puts("[5.1.3]");//

    printf("%s\n", *ukazatel);

    for(int i = 0; i < lines; i++)
    {
        printf("%s\n", *(ukazatel + i));
    }

    for(int i = lines; i > 0; i--)
    {
        puts("[5.1.3.1]");//
        for(int j = 0; j < i - 1; j++)
        {
            puts("[5.1.3.2]");//
            for(int h = 0; h < Strlen(*(ukazatel + (h * sizeof(char *)))); h++)
            {
                puts("[5.1.4+]");//
                printf("%c\n", *(*(ukazatel + 1) + 1));
                if(*(*(ukazatel + j) + h) != *(*(ukazatel + j + 1) + h))
                {
                    puts("[5.1.5]");//
                    if(**(ukazatel + (j * sizeof(char *)) + h) > **(ukazatel + ((j + 1) * sizeof(char *)) + h))
                    {
                        puts("[5.1.6]");//
                        char * a = *(ukazatel + (j * sizeof(char *)));
                        *(ukazatel + (j * sizeof(char *))) = *(ukazatel + ((j + 1) * sizeof(char *)));
                        *(ukazatel + ((j + 1) * sizeof(char *))) = a;
                    }
                }
            }
        }
    }   

    return ukazatel;
}

size_t Strlen(const char* str)
{
    puts("[5.1.4]");//
    size_t i = 0;
    for (; str[i] && str[i] != '\n'; i++) {}

    return i;
}