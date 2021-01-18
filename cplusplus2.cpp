#include <iostream>
#include<string>
using namespace std;

int leng(string s);

bool ishere(string x, string y);

int main() {

	cout << "input your text:";
	string text;
	getline(cin, text);

	cout << "input the word:";
	string wored;
	getline(cin, wored);

	cout<<ishere(text, wored);

}

int leng(string s) {
	int i = 0;
	while (s[i]!='\0')
	{
		i++;
	}
	return i;
}

bool ishere(string x, string y) {
	int a = leng(x);
	int b = leng(y);
	int temp,alpha=0;

	for (int i = 0; i < a; i++)
	{

		temp = i;

		for (int k = 0; k < b; k++)
		{

			if (x[temp] == y[k]) {
				alpha++;
				temp++;
			}
			else
			{
				alpha = 0;
			}

		}

		if (alpha == b) {
			cout<< alpha<<endl;
			return alpha;
			break;
		}

	}

}