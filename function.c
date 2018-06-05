#include "function.h"
int aux=0;
task taskuri[20],taskAux;
void bubbleSort( task arr[], int n)
{

    int i, j;                                     //orodonare cu metoda bulelorr
    for (i = 0; i < n-1; i++)
        for (j = 0; j < n-i-1; j++)
            if (arr[j].duration > arr[j+1].duration)
            {
                taskAux.start = arr[j].start;             //aux=x;
                taskAux.finish=arr[j].finish;
                taskAux.duration=arr[j].duration;

                arr[j].start = arr[j+1].start;              //x=y;
                arr[j].finish = arr[j+1].finish;
                arr[j].duration = arr[j+1].duration;

                arr[j+1].start= taskAux.start;              //y=aux;
                arr[j+1].finish= taskAux.finish;
                arr[j+1].duration= taskAux.duration;
            }
            else if(arr[j].duration == arr[j+1].duration)
            {
                if(arr[j].start > arr[j+1].start)
                {
                    taskAux.start = arr[j].start;             //aux=x;
                    taskAux.finish=arr[j].finish;
                    taskAux.duration=arr[j].duration;

                    arr[j].start = arr[j+1].start;              //x=y;
                    arr[j].finish = arr[j+1].finish;
                    arr[j].duration = arr[j+1].duration;

                    arr[j+1].start= taskAux.start;              //y=aux;
                    arr[j+1].finish= taskAux.finish;
                    arr[j+1].duration= taskAux.duration;

                }

            }


}
int sortare( task taskuri[],int n)
{
    int i;
    int j;
    int k=1;
    int number_of_tasks;
    aux=taskuri[0].finish;
    for(i=0; i<=n-2; i++)               //ordornareeeeeeeeeee
    {
        for(j=i+1; j<=n-1; j++)
        {
            if(aux<=taskuri[j].start)
            {
                k=k+taskuri[j].duration;
                number_of_tasks=number_of_tasks+1;
                aux=taskuri[j].finish;
                i++;
            }
        }

    }

    return k;


}
