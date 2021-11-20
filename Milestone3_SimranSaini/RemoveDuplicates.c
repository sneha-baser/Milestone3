//C Program to delete duplicate elements from an sorted array

#include <stdio.h>
#include <conio.h>
 
int main()
    {
    int inputArray[500], elementCount, counter;
    int readIndex, writeIndex;
     
    printf("Enter number of elements in array: ");
    scanf("%d", &elementCount);
         
    printf("Enter %d numbers in increasing order \n", elementCount);
    for(counter = 0; counter < elementCount; counter++){
        scanf("%d", &inputArray[counter]);
    }
    
    // Input Elements must be in increasing order
     
    for(counter = 1; counter < elementCount; counter++){
        if(inputArray[counter] < inputArray[counter -1]){
            printf("Invalid Input: elements not in increasing order \n");
            return 1;
        }
    }
    
     //here readIndex scan elements from left to write and tries to find a duplicate element. 
     
    for(readIndex=1, writeIndex=0; readIndex < elementCount; readIndex++){
        if(inputArray[readIndex] != inputArray[writeIndex]){
            writeIndex++;
            inputArray[writeIndex] = inputArray[readIndex];
        }
    }
     
    /* Print elements after deleting duplicates */
    printf("Array elements after deleting duplicates: \n");
    for(counter = 0; counter < writeIndex + 1; counter++){
        printf("%d ", inputArray[counter]);
    } 
         
    getch();
    return 0;
}

/*
Writing three different outputs for this code
OUTPUT-1:
Enter number of elements in array: 10
Enter 10 numbers in increasing order 
9
9
8
6
6
5
4
4
3
2
Invalid Input: elements not in increasing order 

OUTPUT-2:
Enter number of elements in array: 10
Enter 10 numbers in increasing order 
1
1
2
3
3
3
4
5
5
6
Array elements after deleting duplicates: 
1 2 3 4 5 6 

OUTPUT-3:
Enter number of elements in array: 5
Enter 5 numbers in increasing order 
1
1
1
3
3
Array elements after deleting duplicates: 
1 3 
*/
