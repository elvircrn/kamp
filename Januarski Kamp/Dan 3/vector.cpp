#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector <int> A;

int main() 
{
	A.push_back(1);
	A.push_back(2);
	A.push_back(3);

	for (int i = 0; i < A.size(); i++)
		cout << A [i] << " ";
	cout << endl;

	

	return 0;
}