#include <stdio.h>

int main()
{

	int len;
	scanf("%d", &len);
	int arr[len];
	for (int i = 0; i < len; i++)
	{
		scanf("%d", &arr[i]);
	}

	// sorting the array

	for (int i = 0; i < len; i++)
	{
		for (int j = i; j < len; j++)
		{
			if (arr[j] < arr[i])
			{
				int temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}

	// BinarySearch

	int key;
	scanf("%d", &key);

	int start = 0;
	int end = len;

	while (1)
	{
		int mid = (start + end) / 2;
		if (arr[mid] == key)
		{
			printf("index of key:%d", mid);
			break;
		}
		else if (arr[mid] > key)
		{
			end = mid;
		}
		else if (arr[mid] < key)
		{
			start = mid;
		}
	}
	return 0;
}