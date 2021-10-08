#include "onegin.h"

void ChecksPointer(char ** pointer)
{
    if (!pointer)
    {
        printf("Pointer is NULL!\n");
        exit(EXIT_FAILURE);
    }
}

void ChecksPointer(void * pointer)
{
    if (!pointer)
    {
        printf("Pointer is NULL!\n");
        exit(EXIT_FAILURE);
    }
}