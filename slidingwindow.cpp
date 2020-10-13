#include<bits/stdc++.h>
using namespace std;

void solve(string X, string Y)
{
	int n=X.length();
	int m=Y.length();
	if ((m = Y.length()) > (n = X.length()))
		return;

	unordered_multiset<char> curr;
	unordered_multiset<char> pat;

	for (int i = 0; i < m; i++)
		pat.insert(Y[i]);

	for (int i = 0; i < n; i++)
	{
		// add first m characters of string X into current window
		if (i < m)
			curr.insert(X[i]);
	
		else
		{
			// If all characters in current window matches that of
			// string Y, we found an anagram
			if (curr == pat)
			{
				cout << X.substr(i - m, m) <<
					" present at index " << i - m << '\n';
			}
		
			auto itr = curr.find(X[i - m]);
			if (itr != curr.end())
				curr.erase(itr);

		 curr.insert(X[i]);
		}
	}

	if (curr == pat)
	{
		cout << X.substr(n - m, m) <<
			" present at index " << n - m << '\n';
	}
}

int main()
{
	string X = "XYYZXZYZXXYZ";
	string Y = "XYZ";

	solve(X, Y);

	return 0;
}
