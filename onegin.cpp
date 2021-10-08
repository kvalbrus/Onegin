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

size_t Strlen(const char* str)
{
    puts("[5.1.4]");//
    size_t i = 0;
    for (; str[i] && str[i] != '\n'; i++) {}

    return i;
}