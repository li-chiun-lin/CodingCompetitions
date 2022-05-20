#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print(vector<int>& v)
{
    for (auto x : v)
        cout << x << " ";
    cout << endl;
}

int reversort(vector<int>& vec)
{
    int c = 0;

    for (int i = 0; i < vec.size() - 1; ++i)
    {
        auto min = min_element(vec.begin() + i, vec.end());
        int j = (int)(min - vec.begin());

        //cout << (j - i + 1) << " " << i << j << endl;

        c += j - i + 1;

        reverse(vec.begin() + i, min + 1);
        //print(vec);
    }

    return c;
}

int main()
{
    int T;
    cin >> T;

    for (int i = 1; i <= T; ++i)
    {
        int N;
        cin >> N;

        vector<int> vec(N);

        for (int j = 0; j < N; ++j)
            cin >> vec[j];

        cout << "Case #" << i << ": ";
        cout << reversort(vec) << endl;
    }

    return 0;
}