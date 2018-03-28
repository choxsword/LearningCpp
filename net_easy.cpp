#include<bits/stdc++.h>
using namespace std;

class A
{
	char a[2];
	virtual void fun() {};
};

class B :public virtual A
{
	char a[2];
	char b[2];
};
class C :public virtual B
{
	char a[2];
	char b[2];
	char c[2];
};

int main()
{

	
	return 0;
}