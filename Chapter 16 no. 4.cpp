#include<iostream>
using namespace std;

template < class Absolute >
Absolute absoluteValue(Absolute a)
{
	 if(a < 0)
        return a * -1;
    else
        return a;
}

int main()
{
	int x , y;
	
	cout << "Please input a positive number: ";
	cin >> x;
	
	cout << "Please input a negative number: ";
	cin >> y;
	
	cout << "The absolute value of " << x << " is: ";
	cout << absoluteValue(x) << endl;
	
	cout << "The absolute value of " << y << " is: ";
	cout << absoluteValue(y) << endl;
	
	return 0;
}
