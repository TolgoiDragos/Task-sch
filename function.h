///\file function.h
/// Developed by Tolgoi Dragos Cristian  05/06/2018
///
///\brief project no.3- Doxygen

#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

typedef struct    //structuri
{
    int start;
    int finish;
    int duration;
}task;

void bubbleSort( task arr[], int n);
int sortare(task taskuri[],int n);

#endif

