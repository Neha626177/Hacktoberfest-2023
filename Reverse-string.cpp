
#include <bits/stdc++.h>
using namespace std;

// Function to reverse a string
void reverseStr(string& str)
{
	int n = str.length();
	for (int i = 0; i < n / 2; i++)
		swap(str[i], str[n - i - 1]);
}

// Driver program
int main()
{
	string str = "HelloWorld";
	reverseStr(str);
	cout << str;
	return 0;
}
