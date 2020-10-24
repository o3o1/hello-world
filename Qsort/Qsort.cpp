#include <iostream>

using namespace std;

void Qsort(long long arr[], long long low, long long high)
{
    if (high <= low)
        return;
    long long i = low;
    long long j = high + 1;
    long long key = arr[low];
    while (true)
    {
        while (arr[++i] < key)
        {
            if (i == high)
            {
                break;
            }
        }
        while (arr[--j] > key)
        {
            if (j == low)
            {
                break;
            }
        }
        if (i >= j)
            break;
        long long temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    long long temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    Qsort(arr, low, j - 1);
    Qsort(arr, j + 1, high);
}

int main()
{
    long long n;
    cin >> n;
    long long a[n];
    for (long long i = 0; i < n; i++)
        cin >> a[i];

    Qsort(a, 0, n - 1);
    for (long long i = 0; i < n - 1; i++)
    {
        cout << a[i] << " ";
    }
    cout << a[n - 1] << endl;
    return 0;
}