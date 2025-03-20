#define SIZE 8

#include <iostream>

using namespace std;

void binary_search(int list[], int key)
{
	int left = 0;
	int right = SIZE - 1;

	while (left <= right)
	{
		int mid = left + (right - left) / 2;

		if (list[mid] == key)
		{
			cout << "The number " << key << " is stored in the " << mid << "th cell of the array!" << endl;
			return;
		}
		else if (list[mid] < key)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	

	cout << "404 Error!\n\nKey Not Found\n\nThe Key you are looking for doesn't exist or an other error occurred.\nGo back, or press Enter key to type a new Key value" << endl;
}

int main()
{
	int list[SIZE] = { 5, 6, 11, 13, 27, 55, 66, 99 };

	int key = 66;

	binary_search(list, key);

	return 0;
}