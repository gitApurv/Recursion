#include <iostream>
#include <vector>
using namespace std;

void printSubsequences(int index, vector<int> &temp, int n, vector<int> &arr)
{
    if (index == n)
    {
        for (auto x : temp)
            cout << x << " ";
        cout << endl;
        return;
    }

    temp.emplace_back(arr[index]);

    printSubsequences(index + 1, temp, n, arr);

    temp.pop_back();

    printSubsequences(index + 1, temp, n, arr);
}

int main()
{
    int n = 5;
    vector<int> arr = {1, 2, 3, 4, 5}, temp;
    printSubsequences(0, temp, n, arr);
}