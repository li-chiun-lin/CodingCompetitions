/*
5%

Each character on a computer is assigned a unique code and the preferred standard is ASCII (American Standard Code for Information Interchange). For example, uppercase A = 65, asterisk (*) = 42, and lowercase k = 107.

A modern encryption method is to take a text file, convert the bytes to ASCII, then XOR each byte with a given value, taken from a secret key. The advantage with the XOR function is that using the same encryption key on the cipher text, restores the plain text; for example, 65 XOR 42 = 107, then 107 XOR 42 = 65.

For unbreakable encryption, the key is the same length as the plain text message, and the key is made up of random bytes. The user would keep the encrypted message and the encryption key in different locations, and without both "halves", it is impossible to decrypt the message.

Unfortunately, this method is impractical for most users, so the modified method is to use a password as a key. If the password is shorter than the message, which is likely, the key is repeated cyclically throughout the message. The balance for this method is using a sufficiently long password key for security, but short enough to be memorable.

Your task has been made easy, as the encryption key consists of three lower case characters. Using p059_cipher.txt (right click and 'Save Link/Target As...'), a file containing the encrypted ASCII codes, and the knowledge that the plain text must contain common English words, decrypt the message and find the sum of the ASCII values in the original text.
*/

#include <algorithm>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>


using namespace std;

void print(vector<int> &v)
{
	for (int i = 0; i < 50; ++i)
		cout << (char)v[i];
	cout << endl;
}

void print(string &v)
{
	for (int i = 0; i < 50; ++i)
		cout << v[i];
	cout << endl;
}

bool alphabet(vector<int> &v)
{
	for (int x : v)
		if (! isalpha(x) && x != ' ')
			return false;

	return true;
}

int euler()
{
	ifstream ifs("p059_cipher.txt", ifstream::in);
	string tok;
	vector<int> cipher;

	while (getline(ifs, tok, ','))
		cipher.push_back(stoi(tok));

	//print(cipher);

	ifs.close();

	int n = cipher.size();
	string dec(n, ' ');
	string key(3, ' ');
	vector<pair<int, int>> freq(26);
	int target = (1 << 'x' - 'a') | (1 << 'z' - 'a') | (1 << 'j' - 'a') | (1 << 'q' - 'a');

	for (key[0] = 'a'; key[0] <= 'z'; ++key[0])
		for (key[1] = 'a'; key[1] <= 'z'; ++key[1])
			for (key[2] = 'a'; key[2] <= 'z'; ++key[2])
			{
				for (int i = 0; i < n; ++i)
					dec[i] = cipher[i] ^ key[i % 3];

				if (dec.find(" the") != string::npos)
				{
					int s = accumulate(begin(dec), end(dec), 0);
					cout << key << " : " << s << " : ";
					print(dec);
				}
			}

	return 0;
}

int main()
{
	cout << euler() << endl;

	return 0;
}
