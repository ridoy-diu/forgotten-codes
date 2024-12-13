#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(void)
{
    vector<int> num;

    for (int i = 1; i <= 10; i++)
        num.push_back(i);

    cout << "the elements are: ";
    for (auto i = num.begin(); i != num.end(); i++) // iterator
        cout << *i << " ";

    cout << "vector size is: " << num.size() << endl;
    cout << "vector capacity is: " << num.capacity() << endl;
    cout << "vector maximum size is: " << num.max_size() << endl;

    num.resize(5);
    cout << "vector size after resizing: " << num.size() << endl;

    for (auto i = num.begin(); i != num.end(); i++)
        cout << *i << " ";

    return 0;
}