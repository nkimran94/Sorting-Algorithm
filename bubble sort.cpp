#include <iostream>
using namespace std;
void bubble_sort(int arr[],int n)
{
    int i,j,temp;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp  = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main()
{
    int n;
    cout << "Give me the array size: " <<endl;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bubble_sort(arr, n);
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] <<" ";
    }
    return 0;
}
