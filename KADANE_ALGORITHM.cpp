// LARGEST SUM CONTIGUOUS SUB ARRAY
#include <stdio.h>
int main()
{
 int array[] = {-2,-3,4,-1,-2,1,5,-3,4};
 int max_so_far = 0;
 int max_ending_here = 0;
 for(int i =0;i<(sizeof(array)/sizeof(array[0]));i++){ // Looping through each element in the array
        max_ending_here = max_ending_here + array[i]; // The current array element is stored in max_ending_here.
        if(max_ending_here < 0){ // If the element is less than 0 (like -1,-2,-3,...)
            max_ending_here = 0; // make max_ending_here to zero
        }
        if(max_so_far < max_ending_here){ // if the max_so_far element in the array has found a number bigger than max_ending_here,
            max_so_far = max_ending_here; // max_so_far keeps the maximum number
        }
 }
return max_so_far; // returns the max number stored
 }
