#include <bits/stdc++.h>
#include <vector>
using namespace std;

void display(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main(void)
{
    vector<int> arr;

    arr.assign(10, 1);
    cout << "the elements that are assigned are: ";
    display(arr);

    arr.push_back(21);
    int n = arr.size();
    cout << "last element is: " << arr[n - 1] << endl;

    cout << "after push_back: ";
    display(arr);

    arr.pop_back();
    cout << "after pop_back: ";
    display(arr);

    arr.insert(arr.begin(), 45);
    cout << "after insert: ";
    display(arr);

    arr.clear();
    cout << "now after clearing: ";
    display(arr);
    cout << "the size of the vector is: " << arr.size() << endl;

    return 0;
}