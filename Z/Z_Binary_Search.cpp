#include <iostream>
using namespace std;

void merge(int arr[], int temp[], int left, int mid, int right) 
{
    int i = left, j = mid + 1, k = left;

    while (i <= mid && j <= right) 
    {
        if (arr[i] <= arr[j]) 
        {
            temp[k++] = arr[i++];
        } 
        else 
        {
            temp[k++] = arr[j++];
        }
    }

    while (i <= mid) 
    {
        temp[k++] = arr[i++];
    }

    while (j <= right) 
    {
        temp[k++] = arr[j++];
    }

    for (i = left; i <= right; i++) 
    {
        arr[i] = temp[i];
    }
}

void mergeSort(int arr[], int temp[], int left, int right) 
{
    if (left < right) 
    {
        int mid = (left + right) / 2;

        mergeSort(arr, temp, left, mid);   
        mergeSort(arr, temp, mid + 1, right); 
        merge(arr, temp, left, mid, right);  
    }
}

int main() 
{
    int n, q, a;
    cin >> n >> q;

    int arrA[n];
    for (int i = 0; i < n; i++) 
    {
        cin >> arrA[i];
    }

    int temp[n];
    
    mergeSort(arrA, temp, 0, n - 1);

    while (q--) 
    {
        cin >> a;
        int first = 0, last = n - 1;
        bool found = false;

        while (first <= last) 
        {
            int mid = (first + last) / 2;
            if (arrA[mid] == a) {
                cout << "found" << endl;
                found = true;
                break;
            } 
            else if (a > arrA[mid]) 
            {
                first = mid + 1;
            } 
            else 
            {
                last = mid - 1;
            }
        }

        if (!found) 
        {
            cout << "not found" << endl;
        }
    }
    return 0;
}
