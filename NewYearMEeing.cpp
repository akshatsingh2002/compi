#include <iostream>
#include <algorithm>
using namespace std;
void meet()
{
    int arr[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + 3);
    cout << arr[1] - arr[0] + arr[2] - arr[1];
}
int main()
{
    meet();
    return 0;
}