#include <iostream>
using namespace std;

class Arrays
{
public:
    int accessElements(int arr[], int size)
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << "\t";
        }
        return 0;
    }
};

int main()
{
    Arrays obj;
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    obj.accessElements(a, 5);
    return 0;
}