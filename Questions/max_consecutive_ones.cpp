#include <iostream>
#include <math.h>

using namespace std;

int maxOnes(int arr[], int n)
{
    int counter = 0;
    int maximum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            counter++;
        }
        else
        {
            counter = 0;
        }
        maximum = max(maximum, counter);
    }
    return maximum;
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

    cout << maxOnes(arr, n);

    return 0;
}