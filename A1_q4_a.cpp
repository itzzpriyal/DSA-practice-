#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "enter no of elements you want to enter" << endl;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "enter element : " ;
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    cout << endl;

    for (int i = 0, j = n - 1; i < (n / 2); i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        cout << endl;
 cout<<"Reversing array"<<endl;
        for (int i = 0; i < n; i++)
        {
            cout << "  "<<arr[i];
        }
    }
    cout<<endl<<"REVERSED ARRAY"<<endl;
    for (int i = 0; i < n; i++)
        {
            cout << "  "<<arr[i];
        }

    return 0;
}