#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int arr[] = {a, b, c, d};

    sort(arr, arr + 4);

    if (arr[0] + arr[1] > arr[2] || arr[0] + arr[1] > arr[3] || arr[1] + arr[2] > arr[3])
    {
        printf("TRIANGLE\n");
    }
    else if (arr[0] + arr[1] == arr[2] || arr[0] + arr[1] == arr[3] || arr[1] + arr[2] == arr[3])
    {
        printf("SEGMENT\n");
    }
    else
    {
        printf("IMPOSSIBLE\n");
    }

    return 0;
}
