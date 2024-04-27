#include "sort.h"

/**
 * selection_sort - Entry point
 * @array: aiuwefg
 * @size: Always 0
 */
void selection_sort(int *array, size_t size)
{
size_t i, j, k;
int temp;

for (i = 0; i < size - 1; i++)
{
for (j = i + 1, k = size - 1; k > i; k--)
{
if (array[k] < array[j])
{
j = k;
}
if (array[i] > array[j])
{
temp = array[i];
array[i] = array[j];
array[j] = temp;
print_array(array, size);
}
}
}
}
