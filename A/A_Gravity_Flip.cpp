#include <iostream>
using namespace std;

void bubbleSort(int a[], int n) 
{
    for(int i = 0; i < n - 1; i++) 
    {
        for(int j = 0; j < n - i - 1; j++) 
        {
            if(a[j] > a[j + 1]) 
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

void printarr(int a[], int n) 
{
    for (int i = 0; i < n; i++) 
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() 
{
    int n;

    //cout << "Enter the number of elements: ";
    cin >> n;

    int a[n];

    //cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }

    bubbleSort(a, n);
    //cout << "Sorted array: ";
    printarr(a, n);

    return 0;
}
