#include <iostream>
int main()
{
	using namespace std;
	int n;
	int i;
	string awa("hello robomaster!");
	cout << "PLEASE INPUT NUMBER1-10";
	cin >> n;
	if (n < 11 && n>0)
	{
		for (i = 0; i < n; i++)
			cout << awa << endl;
	}
	else
	{
		cout << "PLEASE INPUTE CORRECT NUMBER";

	}
	
	
	
		
	

	
	return 0;
}