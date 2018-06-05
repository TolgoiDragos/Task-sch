#include "function.h"

int k=1;
int i;
int j;
int number_of_tasks;
int p;
task taskuri[20];

int main()
{

    FILE *myFile;
    myFile = fopen("in.txt", "r");
    int numberArray[1000];
    int i,j;
    int n;
    int t;
    printf("time=");
    scanf("%d",&t);

    if (myFile == NULL)   // daca avem cv de citit
    {
        printf("Error Reading File\n");
        exit (0);
    }

    fscanf(myFile, "%d,", &numberArray[0]);
    n=numberArray[0];
    j=0;

    for (i = 1; i <= n*2; i++)                                   // scriere in fisier
    {
        fscanf(myFile, "%d,", &numberArray[i] );
        if(i%2!=0)
        {
            taskuri[j].start=numberArray[i];
        }
        if(i%2==0)
        {
            taskuri[j].finish=numberArray[i];
            j++;
        }
    }

    for (i = 0; i < n; i++)                    // cat dureaza un taskk
    {
        taskuri[i].duration=taskuri[i].finish-taskuri[i].start;
    }

    bubbleSort(taskuri,n);           // apelam functia bublesort ce ordoneaza in functie de durata si de start

    for (i = 0; i < n; i++)
    {
        printf("task_%d: start_%d, finish_%d , duration_%d\n\n", i,taskuri[i].start,taskuri[i].finish,taskuri[i].duration );
    }

    k=sortare(taskuri,n);
    printf("The maximum duration is:");
    printf("k=%d",k);
    fclose(myFile);

    return 0;
}
