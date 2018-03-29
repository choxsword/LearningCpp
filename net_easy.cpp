#include<bits/stdc++.h>
using namespace std;

class A
{
	
};

class B :public  A
{
	A b;
	double a;
};
class C :public virtual B
{
	char a[2];
	char b[2];
	char c[2];
};
enum  fuck :unsigned long long { a = 666 };

int main()
{
	
	cout << sizeof(A) << endl << sizeof(B) << endl;
	
	return 0;
}