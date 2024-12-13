// finding an element in a rotated sorted array

#include <bits/stdc++.h>
using namespace std;

int first_index(int arr[], int l, int r)
{
    int ans = 0;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (mid < r && arr[mid + 1] < arr[mid])
        {
            ans = mid + 1;
            break;
        }
        else if (mid > l && arr[mid] < arr[mid - 1])
        {
            ans = mid;
            break;
        }
        else if (arr[r] > arr[mid])
            r = mid - 1;
        else
            l = mid + 1;
    }
    return ans;
}

int bs(int arr[], int l, int r, int x)
{
    int result = -1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] == x)
        {
            result = mid;
            r = mid - 1;
        }
        else if (x < arr[mid])
            r = mid - 1;
        else
            l = mid + 1;
    }
    return result;
}

int main(void)
{
    int n;
    cout << "Enter array size: ";
    cin >> n;

    int arr[n + 3];
    cout << "Enter rotated sorted array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int x;
    cout << "Enter element to find: ";
    cin >> x;

    int fi = first_index(arr, 0, n - 1);

    int first_part = bs(arr, 0, fi - 1, x);
    int second_part = bs(arr, fi, n - 1, x);

    if (first_part == -1 && second_part == -1)
        cout << "Element Not Found" << endl;
    else
    {
        if (first_part != -1)
            cout << "Element Found at index " << first_part << endl;
        else if (second_part != -1)
            cout << "Element Found at index " << second_part << endl;
    }
    return 0;
}