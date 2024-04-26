#include "sort.h"

/**
 * bubble_sort - Entry point
 * @array: akjshdf
 * @size: asldhf
 */
void bubble_sort(int *array, size_t size)
{
size_t i, j;
int temp = 0, swapped;

while(1)
{
swapped  = 0;
for(i = 0, j = 1; j < size; i++, j++)
{
if(array[i] > array[j])
{
temp = array[i];
array[i] = array[j];
array[j] = temp;
print_array(array, size);
swapped ++;
}
}
if(swapped == 0)
{
break;
}
}
}
