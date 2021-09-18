#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "onegin.h"

int main()
{
    // открываем файл
    FILE * file = fopen(FILENAME, "r");

    // проверяем файл на то, есть ли он
    if (file == NULL)
    {
        puts("File error!");
        exit(1);
    }

    readingLines(file);

    return 0;
}

char* readingLines(FILE * file)
{
    // size - размер файла в байтах
    long size = ftell(file);

    // buffer - указатель на char символы
    const char* buffer;

    // выделение памяти под символы из файла size * sizeof(char) - количество символов умножается на их размер в системе
    buffer = (char*) malloc(size * sizeof (char));

    // массив указателей на строки
    char* PointerToStrings;

    // считаем с файла все символы и указатель передаётся в buffer, размер читается size
    fread(&buffer, sizeof(char), size, file);

    while (buffer)
    {
        // нахождения символа новой строки и запись адреса символа \n со сдвигом на 1 символ (адрес 1 символа в новой строке)
        //
        PointerToStrings = (strchr(buffer, '\n') + 1);
        buffer = PointerToStrings;
    }

    return NULL;
}
