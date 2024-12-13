// binary search

#include <bits/stdc++.h>
using namespace std;

void bs(int arr[], int l, int r, int x)
{
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
        {
            cout << "Element found at index " << mid << endl;
            return;
        }
        else if (x > arr[mid])
            l = mid + 1;
        else
            r = mid - 1;
    }
    cout << "Element not found" << endl;
}

int main(void)
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    int x;
    cout << "Enter element to find: ";
    cin >> x;

    bs(arr, 0, n - 1, x);

    return 0;
}