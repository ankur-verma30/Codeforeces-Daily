#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

// Ankur Verma
int main()
{

    int n;
    cin >> n;
    vector<int> heights(n);
    int minElement = INT_MAX, maxElement = 0;
    int minIndex = 0, maxIndex = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> heights[i];
        if (i == 0)
        {
            minElement = heights[i];
            maxElement = heights[i];
        }
        if (heights[i] > maxElement)
        {
            maxElement = heights[i];
            maxIndex = i;
        }
        else if (minElement >= heights[i])
        {
            minElement = heights[i];
            minIndex = i;
        }
    }

    if (maxIndex > minIndex)
        cout << (maxIndex + (n - 1 - minIndex) - 1) << endl;
    else
        cout << (maxIndex + (n - 1 - minIndex)) << endl;

    return 0;
}