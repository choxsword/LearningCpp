#include <iostream>
#include "test.h"
#include "polimorphism.h"
//#include<typeinfo>
#include "crtp.h"
#include<string>
#include<limits>
#include<set>
#include<initializer_list>
#include<vector>
#include<unordered_map>
#include<stack>
#include<cmath>
#include<map>
using namespace std;


struct Address {
    bool operator<(const Address& a) const { return 1; }
};
struct Cell {};
int main()
{
 std::vector<int> v;
    std::fill_n(v.begin(), 3, -1);
    for (int n : v)
        std::cout << n << ' ';
}



