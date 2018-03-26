#pragma once
#include <iostream>
#include<memory>

using namespace std;
namespace test
{
class base1
{

    int mem = 0;

  private:
    virtual int out() const = 0;
};

class base2
{
  private:
    virtual int out() const = 0;
};
class derived;
class TestFriend
{
public:
    void output(derived&);


};
class derived : private base1, private base2
{
  public:
       friend void TestFriend::output(derived&);

    void test()
    {
        cout << "hehe" << endl;
    }
    int out() const noexcept override final
    {
        cout << "v" << endl;
        return 666;
    }

    derived()
    {
        mem1=6666;
    }
    derived(initializer_list<int> &&l)
    {
        for (auto i : l)
        {
            cout << i << "666" << endl;
        }
    }

    operator int() const
    {
        return 666;
    }

    private:
    int mem[6] = {5, 5, 5};
    int mem1;

    virtual void no_instant();
   
};


inline void TestFriend::output(derived &k)
{
    cout<<k.mem1<<endl;
}





inline void derived::no_instant()
{
}
void test_namespace();
inline  void test_namespace()
{
    cout<<"oppp"<<endl;

}

template <typename T>
void test_temp_decl(T &&a);


//template<typename T>
struct POD
{
   static int mem;
    int mem1;
    char mem2;
    // POD(int mem1){mem1=mem1;}
    // friend void test_temp_decl<T>(T&& a);
   POD( int k=666)
   {
       mem1=k;
   }
   const int& getmem1()
   {
       return mem1;
   }
    const POD& operator=(const POD& rhs)
    {
        mem1=rhs.mem1;
        cout<<"haha"<<endl;
        return *this;
    }

  POD&  operator ++(void)
    {
        ++mem1;
        return *this;
    }
};

enum fuckit
{
    fuck = 1,
    shit = 4,
    nimei = 55
};

template<typename T>
void test_temp_args(T &&t)
{
    cout<<t<<endl;
    //t=6;
}

template <typename T,typename ...Args>
void test_temp_args(T t,Args... args)
{
    cout<<t<<endl;
    test_temp_args(args...);
}

class test_embed
{ 
    public:
    class embeded 
    {
        public:
        int mem=0;
    };


};

class Empty{};

class EmptyClass:Empty
{
    
    Empty a;
 
};

class TansCons
{
public:
    TansCons(const char* char_ptr);
    TansCons(const TansCons &obj);
   TansCons& operator =(const TansCons& obj);

    
std::shared_ptr<char> mem;
    
    
};

constexpr int test_constexpr(int i)
{
    return i+1;
}

class test_dtor
{
    public:
    ~test_dtor()=delete;

};

template <typename T>
void print_byte(const T *  input,unsigned len)
{
    
   
    for( int i=0;i<len;++i)
    {
      cout<<hex<<static_cast<unsigned>(*input++);
    }
    cout<<endl;
}

struct test_size
{
   int k;
   test_size(int a=mem):k(a){}
   static int mem;
   void*operator new(size_t memo_size);
    static void test_print_func()
    {
        
    }
};
template<typename T>
void test_temp_array( T&& a)
{
    cout<<typeid(T).name()<<endl;
}
class TestExcepInDtr
{
  public:
    ~TestExcepInDtr()
    {
        try
        {
            throw 1;
        }
        catch (int)
        {
            cout << "catched" << endl;
        }
    }
};
template<typename T>
class CRPT 
{
public:
    virtual void test_vtl_templ(T a)
    {
        cout<<a<<endl;
    }

    interface()
    {
        static_cast<T*>(this)->output();
    }

private:
   void output()
    {
        cout<<"i'm templ"<<endl;
    
    }
 
};

class Deri_CRPT:CRPT<Deri_CRPT>
{

    public:
    void output()
    {
        cout<<"i'm son"<<endl;
    }

};

template<typename T>
T test_temp_return(T a)
{
    return a;
}

template <class T>
struct is_pointer
{
  template <class U>
  static char is_ptr(U *);

  template <class X, class Y>
  static char is_ptr(Y X::*);

  template <class U>
  static char is_ptr(U (*)());

  static double is_ptr(...);

  static T t;
  enum { value = sizeof(is_ptr(t)) == sizeof(char) };
};

struct TestCopy
{
    TestCopy()=default;
    TestCopy(TestCopy& _origin)
    {
        mem=_origin.mem;
    }
    int mem;
    
};

}
