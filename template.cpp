#include <bits/stdc++.h>
using namespace std;
vector<int> bit;
// let say
int N = 5;
// to update
void update(int ind, int val)
{
    for (int i = ind; i < N; i += i & (-i))
    {
        bit[i] += val;
    }
}

// to get sum
int sumFunc(int ind)
{
    int sum = 0;
    for (int i = ind; i > 0; i -= i & (-i))
    {
        sum += bit[i];
    }
    return sum;
}

int main()
{

    bit.resize(N + 1, 0);
    vector<int> nums = {1, 2, 3, 4, 5};
    bit = nums;
    int l = 2;
    int r = 4;
    cout << sumFunc(r) - sumFunc(l - 1) << endl;

    return 0;
}
