#include <stdio.h>
int BinarySearch(int arr[], int size, int element)
{
	int mid, high = size - 1, low = 0;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (arr[mid] == element)
		{
			return mid;
		}
		if (arr[mid] < element)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return -1;
}
int main()
{
	int arr[] = {2, 18, 23, 45, 67, 90, 100};
	int element;
	int size = sizeof(arr) / sizeof(int);
	printf("Enter the element to be searched :  ");
	scanf("%d", &element);
	int index = BinarySearch(arr, size, element);
	if (index != -1)
	{
		printf("The element is present at index %d.", index);
	}
	else
	{
		printf("The element is not present.");
	}
	return 0;
}
