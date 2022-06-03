# include <iostream>
# include <cmath>
using namespace std;
int main()
{
	float a, c;
	char b;
	cout <<"____------**CODING GIDEON CALCULATOR**----_____ "<< endl;
	cout << "please input your data :  ";
	cin >> a >> b >> c;
	switch (b)
	{
		case '-' : cout << a << b << c << "  = " << a - c; break;
		
		case '+'  : cout << a << b << c << "  = " << a + c; break;
		
		case '*'  : cout << a << b << c << "  = " << a * c; break;
	
		case '/'  : cout << a << b << c << "  = " << a / c; break;
		
		case '%' :
		bool isaint, iscint;
		isaint = ((int)a == a);
		iscint = ((int)c == c);
		
		if (isaint && iscint)
		cout << a << b << c << " = "<< (int)a % (int)c;
		else
cout <<"Not valid! ";
break;
dafault : cout << "move on please. ";
	}
	system ("pause>0");
}
