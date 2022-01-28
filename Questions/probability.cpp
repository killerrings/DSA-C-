#include <iostream>

using namespace std;

int bigger(int arr[], int n, int key)
{
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > key)
        {
            flag++;
        };
    }
    return flag;
}

float probability(int n, int flag)
{
    return (flag / n);
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

    int key;
    cin >> key;

    cout << probability(n, bigger(arr, n, key)) << endl;
}