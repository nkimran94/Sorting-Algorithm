#include <iostream>
using namespace std;

void selection_sort(int arr[],int n)
{
    int i,j,index_min,temp;
    for(i = 0; i < n-1; i++)
    {
        index_min = i;
        for(j = i+1; j < n; j++)
        {
            if(arr[j] < arr[index_min])
            {
                index_min = j;
            }
        }
        if(index_min != i)
        {
            temp = arr[i];
            arr[i] = arr[index_min];
            arr[index_min] = temp;
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

    selection_sort(arr, n);
    for(int i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    return 0;
}
/*alhamdulillah*/
