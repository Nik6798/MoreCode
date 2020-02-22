#include <iostream>
using namespace std;

//swap main logic
void swap(int ar[], int from, int to)
{
    int tmp = ar[from];
    ar[from] = ar[to];
    ar[to] = tmp;
}

//minimum index locator
int minIndex(int arr[], int s, int e)
{
    int sml = INT32_MAX;
    int mindex;
    for (int i = s; i < e; i++)
    {

        if (sml > arr[i])
        {
            sml = arr[i];
            mindex = i;
        }
    }
    return mindex;
}

//selction sort main logic
void selectionSort(int arr[], int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int min_index;
    min_index = minIndex(arr, start, end);
    swap(arr, start, min_index);
    selectionSort(arr, start + 1, end);
}

int main()
{
    int arr[] = {1, 8, 4, 6, 3, 5,22,23,12,14,15};
    selectionSort(arr, 0, sizeof(arr) / 4);
    for (int i : arr)
    {
        cout << i << " ";
    }
}