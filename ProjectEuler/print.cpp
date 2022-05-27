void print(vector<vector<int>> &m)
{
	for (auto &r : m)
	{
		for (auto c : r)
			cout << c << " ";
		cout << endl;
	}
	cout << endl;
}

void print(vector<vector<int>> &m)
{
	for (auto &r : m)
	{
		for (auto c : r)
			cout << setw(3) << c;
		cout << endl;
	}
	cout << endl;
}

void print(vector<vector<int>> &m)
{
	for (int i = 0; i < m.size(); ++i)
	{
		cout << i << " : ";

		for (auto &c : m[i])
			cout << c << " ";
		cout << endl;
	}
	cout << endl;
}












void print(vector<int> &v)
{
	for (int x : v)
		cout << x;
	cout << endl;
}

void print(vector<int> &v)
{
	for (int x : v)
		cout << x << " ";
	cout << endl;
}

void print(vector<string> &p)
{
	for (string &s : p)
		cout << s << " ";
	cout << endl;
}





void print(set<long long> &s)
{
	for (auto x : s)
		cout << x << " ";
	cout << endl;
}










void print(map<int, int> &v)
{
	for (auto &h : v)
		cout << h.first << " " << h.second << endl;
}