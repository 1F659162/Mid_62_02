#include <iostream>
#include <string>
using namespace std;
int main()
{
	string num ;
	int lnum , total = 0;
	char show ='s' ;

	cout << "Enter Binary : ";
	cin >> num;
	lnum = num.length();

	if(lnum != 5)
	{
		if(lnum > 5) cout << "binary more great than 5." << endl;
		else cout << "binary less than 5." << endl;
	}else 
	{
		for(int i = 0 ; i < lnum ; i++)
		{
			if (num.at(i) != '0' && num.at(i) != '1')
				{
					cout << num.at(i) << " <-- this isn't binary." << endl;
					show = 'n';
				}
			else cout << num.at(i) << endl;
			if(num.at(i) == '1' && i == 0) total += 16;
			if(num.at(i) == '1' && i == 1) total += 8;
			if(num.at(i) == '1' && i == 2) total += 4;
			if(num.at(i) == '1' && i == 3) total += 2;
			if(num.at(i) == '1' && i == 4) total += 1;
		}
	}
	if(show == 's')cout << "Decimal number : " << total << endl;
	return(0);
}