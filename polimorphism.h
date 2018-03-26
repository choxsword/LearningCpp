#include <iostream>
using namespace std;
namespace polimorphism
{
class A {

public:
	int a=1;
    virtual void e(){}
	virtual void v() {}
	static int mem;
};

class B : public virtual A {
public:
	int b=2;
  virtual void v(){cout<<"我丝是UB"<<endl;}
	virtual void w() {}
	
};

class C : public virtual A {
public:
	int c=3;
	virtual void x() {}
    virtual void y(){}
	void print()
	{cout<<this<<endl;}
};

class D : public B, public C {
public:
	int d=4;
	virtual void y() {}
    virtual void v(){ cout<<"fuckit"<<d<<endl;}
};

}