#include <iostream>

using namespace std;

int max(int arr[], int n)
{
    int pointer = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > pointer)
        {
            pointer = arr[i];
        }
    }
    return pointer;
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int mx = -19999;

    for (int i = 0; i < n; i++)
    {
        mx = max(arr[i], mx);
        cout << mx << " ";
    }
}
