#include<stdio.h>

int binary_search(int *sorted_array, int beg, int end, int key)
{
	int mid;
	if(beg > end)
		return -1;
	mid = beg + (end - beg)/2;
	if(sorted_array[mid] == key)
		return mid;
	else if(sorted_array[mid] < key)
		return binary_search(sorted_array, mid+1, end, key);
	else
		return binary_search(sorted_array, beg, mid-1, key);
}

int main()
{
	int array[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
	int i, search_index, key;

	printf("Here's the sorted array that we have\n");
	for(i = 0; i < 10; i++)
		printf("%d ", array[i]);

	printf("\nEnter a key to search in the array: ");
	scanf("%d", &key);

	search_index = binary_search(array, 0, 9, key);
	if(search_index < 0)
		printf("The key is not in this array\n");
	else
		printf("The key is found on index %d\n", search_index);
}
