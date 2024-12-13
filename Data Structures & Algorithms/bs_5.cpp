// finding floor and ceil value of an element in a sorted array

#include <bits/stdc++.h>
using namespace std;

int floor(int arr[], int l, int r, int x)
{
    if (x < arr[l])
        return -1;

    int ans = -1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (x == arr[mid])
        {
            ans = arr[mid];
            break;
        }
        else if (x > arr[mid])
        {
            ans = arr[mid];
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    return ans;
}

int ceil(int arr[], int l, int r, int x)
{
    if (x > arr[r])
        return -1;

    int ans = -1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (x == arr[mid])
        {
            ans = arr[mid];
            break;
        }
        else if (x < arr[mid])
        {
            ans = arr[mid];
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    return ans;
}

int main(void)
{
    int n;
    cin >> n;

    int arr[n + 2];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int x;
    cin >> x;

    cout << "Floor value is " << floor(arr, 0, n - 1, x) << endl;
    cout << "Ceil value is " << ceil(arr, 0, n - 1, x) << endl;

    return 0;
}
