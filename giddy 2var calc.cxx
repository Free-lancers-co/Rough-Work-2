#include <iostream>
#include <string>
#include <cmath>
 using namespace std;
 int main ()
 {
 	string nam;
 	double a, b, c, x, y, d, e, f, g, h, I, j, k, l, m, n, o, p, q, r, z;
 	cout << "Hello there 😊!!. \n Please input your name : "<<endl;
 	getline (cin, nam);
 	cout << "Welcome Mr/Mrs/Miss " << nam << ", great to have you here. "<<endl;
 	cout << "NOTE : This calculator is only meant to calculate two variables equation. \n Your question should be in this way : \n aX + by = c \n where C is constant term.  "<<endl;
 	cout << " X1 value = ";
 	cin >> x;
 	cout << "Y1 value = " ;
 	cin >> y;
 	cout << "Constant term (C1) = ";
 	cin >> c;
 	cout << endl;
 	cout << " _______----------________" << endl;
 	cout  << " The first equation : "<< x << "X (+) "<< y << "Y = " << c <<endl;
 	cout << "________----------________" << endl;
 	cout << "X2 value = ";
 	cin >> a;
 	cout << " Y2 value = ";
 	cin >> b;
 	cout <<" constant term (C2) = ";
 	cin >> d;
 	cout << endl;
 	cout << " ________----------______" <<endl;
 	cout  << " second equation : "<< a << "X (+) "<< b << "Y = " << d << endl;
 	cout << "________------------_______"<< endl;
 	cout << "The equation therefore is: \n " << x << "X (+) " << y << "Y = " << c << " --------(1) "<< "\n " << a << "X (+) "  << b << "Y = "<< d << " -------(2)" << endl;
 	e = x / x;
 	f = y / x;
 	g = c / x;
 	h = a * f;
 	I = a * g;
 	j = h + b;
 	k = d - I;
 	l = j / j;
 	m = k / j;
 	n = m * y;
 	o = c - n;
 	p = o / x;
 	q = x / x;
 	cout << "Trying to make X the subject of the formula from equation (1)  \n " << e << "X = " << -f << "Y (+) " << g << "---------(3)" << endl ;
 	cout << " Input equation (3) into equation (2)......"<<endl;
 	cout << a << " [" << f << "Y (+) " << g << "] (+) "<< b << "Y = "<< d << endl;
 	cout << h << "Y (+) " << I << " (+) " << b << "Y = " << d << endl;
 	cout << j << "Y (+) " << I << "= " << d << endl;
 	cout << j << "Y  = " << k << endl;
 	cout << "Y = " << m << " ----------(4)"<< endl;
 	cout << " Input equation (4) into equation (1)....."<< endl;
 	cout << x << "X (+) " << y << "(" << m << ") = " << c <<endl;
 	cout << x << "X (+) " << n << " = " << c << "-" << n << endl;
 	cout << x << "X = " << o << endl;
 	cout << q << "X = " << p << endl;
 	cout << "Therefore Y = " << m << " and X = " << p << endl;
 	return 0;
 }