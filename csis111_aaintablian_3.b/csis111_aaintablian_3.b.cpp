// CSIS 111,Lab 3.2
// Authored by: Anna Aintablian, Auhtored On:4/05/21
//https://github.com/againtablian20/csis111_aaintablian_3.b.git

#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> g1;

	for (int i = 1;i <= 5;i++)
		g1.push_back(i);
	//g1.insert(g1.begin(), 61);
	cout << "Numbers in vector: ";
	for (int i = 0; i < g1.size();i++)
		cout << g1[i] << " ";
	cout << "\n\nNumbers in reverse: ";
	for (int i = g1.size() - 1;i >= 0;i--)
		cout << g1[i] << " ";

	cout << "\n\nEnd of Program\n\n";
	system("pause");
	return 0;
}