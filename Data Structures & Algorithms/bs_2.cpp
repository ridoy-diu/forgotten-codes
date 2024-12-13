// binary search - first & last occurrence of an element with count number

#include <bits/stdc++.h>
using namespace std;

int first_occurrence(int arr[], int l, int r, int x)
{
    int ans = -1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] == x)
        {
            ans = mid;
            r = mid - 1;
        }
        else if (x > arr[mid])
            l = mid + 1;
        else
            r = mid - 1;
    }
    return ans;
}

int last_occurrence(int arr[], int l, int r, int x)
{
    int ans = -1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] == x)
        {
            ans = mid;
            l = mid + 1;
        }
        else if (x > arr[mid])
            l = mid + 1;
        else
            r = mid - 1;
    }
    return ans;
}

int main(void)
{
    int arr[] = {2, 3, 4, 5, 5, 5, 5, 6, 99, 123};
    int n = sizeof(arr) / sizeof(arr[0]);

    int x;
    cout << "Enter element to find: ";
    cin >> x;

    int fo = first_occurrence(arr, 0, n - 1, x);

    if (fo != -1)
    {
        int lo = last_occurrence(arr, 0, n - 1, x);
        int count = lo - fo + 1;

        cout << "First occurrence at index " << fo << endl;
        cout << "Last occurrence at index " << lo << endl;
        cout << "Count of element " << x << " in the array is " << count << endl;
    }
    else
        cout << "Not found" << endl;

    return 0;
}