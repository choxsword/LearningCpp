#include<iostream>
using std::cout;
using std::endl;
template <typename T>
struct counter
{
    static int objects_created;
    static int objects_alive;
    
    counter()
    {
        ++objects_created;
        ++objects_alive;
        cout<<"created"<<endl;
    }

    counter(const counter&)
    {
        ++objects_created;
        ++objects_alive;
        cout<<"created"<<endl;
    }
protected:
    ~counter() // objects should never be removed through pointers of this type
    {
        --objects_alive;
        cout<<"destroy"<<endl;
    }
};

template <typename T> int counter<T>::objects_created( 0 );
template <typename T> int counter<T>::objects_alive( 0 );



/*-------------------------------------------------------------------------------------------------------------------------*/
template<typename Derived>  class Parent 
{
public:
    void SayHi()
    {
        static_cast<Derived*>(this)->SayHiImpl();
    }
private:
    void SayHiImpl() // no need if no need the default implementation
    {
        cout << "hi, i'm default!" << endl;
    }
};
template<typename Derived> void CRTP(Parent<Derived>& p)
{
    p.SayHi();
}