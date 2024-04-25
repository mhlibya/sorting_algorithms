#include "sort.h"

/**
 * bubble_sort - Entry point
 * @array: akjshdf
 * @size: asldhf
 */
void bubble_sort(int *array, size_t size)
{
size_t i, j;
int temp = 0, checker[size];

while(1)
{
for(i = 0, j = 1; j < size; i++, j++)
{
checker = array;
if(array[i] > array[j])
{
temp = array[i];
array[i] = array[j];
array[j] = temp;
print_array(array);
}
}
if(checker == array)
{
break
}
}
}
