#include<iostream>
#include "test.h"
using namespace std;
namespace test
{

    TansCons& TansCons::operator =(const TansCons& obj)    
    {
        cout<<"="<<endl;
    }

    TansCons::TansCons(const char* obj)
    {
        cout<<"trans cons"<<endl;
    }

    TansCons::TansCons(const TansCons& obj)
    {

        cout<<"copy cons"<<endl;
        
    }
    int test_size::mem;
    void* test_size::operator new(size_t memo_size)
    {
        cout<<"ohoh"<<endl;
      return  ::operator new(memo_size);
    
    }
    int POD::mem=666;
}
