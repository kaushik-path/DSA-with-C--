#include<iostream>
using namespace std;

int biS(int arr[], int l, int r, int x)
{
	while (l <= r) {
		int m = l + (r - l) / 2;
		if (arr[m] == x)
			return m;
		if (arr[m] < x)
			l = m + 1;
		else
			r = m - 1;
	}
	return -1;
}

int main(void)
{
	int arr[] = { 2, 3, 4, 5,7,8 };
	int x = 3;
	int n = sizeof(arr) / sizeof(arr[0]);
	int result = biS(arr, 0, n - 1, x);
	(result == -1)
		? cout << "Element is not present in array"
		: cout << "Element is in at index " << result;
	return 0;
}
