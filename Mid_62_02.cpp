#include <iostream>
#include <string>
using namespace std;
int main()
{
	string num ;
	int lnum , last , count = 1 , total = 0;
	char show ='s' ;

	cout << "Enter Binary : ";
	cin >> num;
	lnum = num.length();
	last = lnum-1;

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
			}else cout << num.at(i) << endl;

			if(num.at(last) == '1')total += count ;
			count *= 2 ;
		}
	}
	if(show == 's')cout << "Decimal number : " << total << endl;
	return(0);
}
