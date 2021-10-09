#include "onegin.h"

void ChecksPointer(struct Lines * pointer)
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