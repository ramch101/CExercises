#include <stdio.h>
#include <stdlib.h>

/* Function Declaration */
int * setarrays(void);
int printarrays(int *array);

int main(void)
{
/************************************************************************************
* Function: int main(void)
* Input : none
* Output : Returns 0 on success
* Procedure: Performs operations on array to store information and prints results.
************************************************************************************/
printarrays(setarrays());
return 0;
}

int * setarrays() {
 // Declare an array of 10 integers in the usual way
    static int array[10];

    // Allocate a block of 10 integers and assign the address
    // of the beginning of the memory block to the pointer array2
    int *array2 = malloc(10 * sizeof(int));
    /* WARNING: malloc may fail and return a NULL value for the pointer
                Good programming practice mandates checking for such failures. */
    if (NULL == array) {
      // Print to the "file" of standard error, rather than standard out
      fprintf(stderr, "malloc failed\n");
    }
    // iteration index
    int i;
    // constant character array (i.e., a string)
    const char *string = "Foobar.";

    for (i=0; i<10; i++)
    {
        // assign the value i to the ith integer element of array
        array[i] = i;
        // set the value inside the memory address at array2 + (i bytes) to i
        *(array2+i) = i;
    }
    return array;
}

int printarrays(int *array){
     int i;
     // increment three bytes BEYOND the allocated memory (buffer overrun)
    for (i=0; i<13; i++)
    {
        // print the array values in the usual way
        printf("array[%d] : %d\n", i, array[i]);
        // print the values contained in each memory address starting at array2
        // printf("*(array2 + %d) : %d\t", i, *(array2+i));
        // print each character in the string
        // printf("string[%d] : %c\t", i, string[i]);
        // do the same thing, but in pointer notation
        // printf("*(string + %d) : %c\n", i, *(string+i));
    }

    // explicitly free the block of memory malloc-ed at array2 for later use
    // free(array2);

    // memory not explicitly freed is automatically freed on function exit
    return 0;
}
