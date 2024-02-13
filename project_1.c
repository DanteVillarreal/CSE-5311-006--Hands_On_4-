//problem 1
  #include <stdio.h>
  #include <stdlib.h>
  
  void insertionSort(int* mergedArray, int totalElements) 
  {
      int currentIndex, key, previousIndex;
      for (currentIndex = 1; currentIndex < totalElements; currentIndex++) 
      {
          key = mergedArray[currentIndex];
          previousIndex = currentIndex - 1;
  
          while (previousIndex >= 0 && mergedArray[previousIndex] > key) 
          {
              mergedArray[previousIndex + 1] = mergedArray[previousIndex];
              previousIndex = previousIndex - 1;
          }
          mergedArray[previousIndex + 1] = key;
      }
  }
  
  int main() 
  {
      int numberOfArrays, arraySize;
      printf("Enter the number of arrays (K): ");
      scanf("%d", &numberOfArrays);
      printf("Enter the size of each array (N): ");
      scanf("%d", &arraySize);
  
      int **inputArrays = malloc(sizeof(int *) * numberOfArrays);
      for (int arrayIndex = 0; arrayIndex < numberOfArrays; arrayIndex++) 
      {
          inputArrays[arrayIndex] = malloc(sizeof(int) * arraySize);
          printf("Enter the elements of sorted array %d delineated by space: ", arrayIndex+1);
          for (int elementIndex = 0; elementIndex < arraySize; elementIndex++) 
          {
              scanf("%d", &inputArrays[arrayIndex][elementIndex]);
          }
      }
  
      int *mergedArray = malloc(sizeof(int) * numberOfArrays * arraySize);
      for (int arrayIndex = 0; arrayIndex < numberOfArrays; arrayIndex++) 
      {
          for (int elementIndex = 0; elementIndex < arraySize; elementIndex++) 
          {
              mergedArray[arrayIndex*arraySize + elementIndex] = inputArrays[arrayIndex][elementIndex];
          }
      }
  
      insertionSort(mergedArray, numberOfArrays*arraySize);
  
      printf("Merged array is: ");
      for (int i = 0; i < numberOfArrays * arraySize; i++) 
      {
          printf("%d ", mergedArray[i]);
      }
  
      for (int i = 0; i < numberOfArrays; i++) 
      {
          free(inputArrays[i]);
      }
      free(inputArrays);
      free(mergedArray);
  
      return 0;
  }
