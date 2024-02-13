//problem 2:



#include <stdio.h>
#include <stdlib.h>

int removeDuplicates(int* array, int arraySize) 
{
    if (arraySize == 0 || arraySize == 1)
        return arraySize;

    int* tempVar = malloc(sizeof(int) * arraySize);
    int j = 0;

    for (int i = 0; i < arraySize - 1; i++)
    {
        if (array[i] != array[i + 1])
        {
            tempVar[j++] = array[i];
        }
    }

    tempVar[j++] = array[arraySize - 1];

    for (int i = 0; i < j; i++)
    {
        array[i] = tempVar[i];
    }

    free(tempVar);

    return j;
}

int main() 
{
    int arraySize;
    printf("Enter asrray size: ");
    scanf("%d", &arraySize);

    int* array = malloc(sizeof(int) * arraySize);

    printf("Enter the elements of the array delineated by space:\n ");
    for (int i = 0; i < arraySize; i++)
    {
        scanf("%d", &array[i]);
    }

    arraySize = removeDuplicates(array, arraySize);

    printf("Array after removing duplicates: ");
    for (int i = 0; i < arraySize; i++)
    {
        printf("%d ", array[i]);
    }

    free(array);

    return 0;
}
