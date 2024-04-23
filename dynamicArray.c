#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//Dynamic Array

int main(int argc, char *argv[])
{
    int *array;

    int n;
    printf(" enter the number of elements of the array "); scanf("%d", &n);

    array=calloc(n, sizeof(int) );
    int i;
    for(i=0; i<n; i++)
    {
        printf(" Enter Number : "); scanf("%d", &array[i]);
    }

    int largest = array[0];
    for(i=0; i<n; i++)
    {
        if(largest<array[i])
        largest = array[i];
    }
    printf(" The biggest member of the series :%d", largest);
    return 0;
}