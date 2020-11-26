#include <iostream>

using namespace std;

int wordlen(char* ptr);
bool checkSame(char word1[999], char word2[999]);

int main()
{
	int No = 1;
	char Name[999];
	char end[10] = {'-'};
	int Amount[100];
	int total = 0;
	double vat = 0;
	cout << "\tRECEIPT GENERATOR" << endl;
	cout << "No\tName\t\tAmount" << endl;
	while(true)
	{
		cout << No << "\t";
		cin >> Name;
		if (checkSame(Name, end))
		{
			break;
		}
		cin >> Amount[No];
		total += Amount[No];
		No++;
	}
	cout << "\t\tVAT %:";
	cin >> vat;
	vat = vat / 100;
	cout << "\t\tVatTt:" << vat * total << endl;
	cout << "\t\tTotal:" << (vat * total) + total;
}

int wordlen(char* ptr)
{
	int i = 0;
	while (ptr[i] != '\0')
	{
		i++;
	}
	return i;
}

bool checkSame(char word1[999], char word2[999])
{
	int i = 0;
	int amount = -1;
	int length = 0;
	if (wordlen(&word1[0]) == wordlen(&word2[0]))
	{
		amount = 0;
		int length = wordlen(&word1[0]);
		while (i < length)
		{
			if (word1[i] == word2[i])
			{
				amount++;
			}
			i++;
		}

	}
	if (amount == i)
		return true;
	else
		return false;
}