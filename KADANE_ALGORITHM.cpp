// LARGEST SUM CONTIGUOUS SUB ARRAY
#include <stdio.h>
int main()
{
 int array[] = {-2,-3,4,-1,-2,1,5,-3,4};
 int max_so_far = 0;
 int max_ending_here = 0;
 for(int i =0;i<(sizeof(array)/sizeof(array[0]));i++){
        max_ending_here = max_ending_here + array[i];
        if(max_ending_here < 0){
            max_ending_here = 0;
        }
        if(max_so_far < max_ending_here){
            max_so_far = max_ending_here;
        }
 }
return max_so_far;
 }
