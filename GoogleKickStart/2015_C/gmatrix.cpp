/*

*/

#include <algorithm>
#include <climits>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

void print(vector<vector<int>>& v)
{
	for (auto& r : v)
	{
		for (auto& c : r)
            cout << setw(5) << c << " ";
        cout << "\n";
	}
}

long long gmatrix(int N, int K, vector<vector<int>>& M)
{
    long long sum = 0;
    vector<vector<int>> mat(N + 1, vector<int>(N + 1));

    // each row
    for (int i = 1; i <= N; ++i)
    {
        deque<int> dq;

        for (int j = 1; j < K; ++j)
        {
            while (dq.size() && dq.back() < M[i][j])
                dq.pop_back();

            dq.push_back(M[i][j]);
        }

        for (int j = K; j <= N; ++j)
        {
            while (dq.size() && dq.back() < M[i][j])
                dq.pop_back();

            dq.push_back(M[i][j]);

            mat[i][j] = dq.front();

            if (M[i][j - K + 1] == dq.front())
                dq.pop_front();
        }
    }

    //cout << "\n";
    //print(mat);

    // each column
    for (int j = K; j <= N; ++j)
    {
        deque<int> dq;

        for (int i = 1; i < K; ++i)
        {
            while (dq.size() && dq.back() < mat[i][j])
                dq.pop_back();

            dq.push_back(mat[i][j]);
        }

        for (int i = K; i <= N; ++i)
        {
            while (dq.size() && dq.back() < mat[i][j])
                dq.pop_back();

            dq.push_back(mat[i][j]);

            sum += dq.front();

            if (mat[i - K + 1][j] == dq.front())
                dq.pop_front();
            
            //cout << "+= " << M[i][j] << "\n";
            //sum += mat[i][j];
        }
    }

    //cout << "\n";
    //print(mat);

    return sum;
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
        long long N, K, C, X;
        cin >> N >> K >> C >> X;

        vector<long long> A(N), B(N);

        for (auto& a : A)
            cin >> a;

        for (auto& b : B)
            cin >> b;

        vector<vector<int>> M(N + 1, vector<int>(N + 1));

        for (int i = 1; i <= N; ++i)
            for (int j = 1; j <= N; ++j)
                M[i][j] = (C + (A[i - 1] * i) + (B[j - 1] * j)) % X;

        //print(M);

		cout << "Case #" << t << ": ";
		cout << gmatrix(N, K, M) << "\n";
	}

	return 0;
}

