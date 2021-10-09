#include "onegin.h"

void ChecksPointer(struct Lines * Pointer)
{
    if (!Pointer)
    {
        printf("Pointer is NULL!\n");
        exit(EXIT_FAILURE);
    }
}

void ChecksPointer(void * Pointer)
{
    if (!Pointer)
    {
        printf("Pointer is NULL!\n");
        exit(EXIT_FAILURE);
    }
}