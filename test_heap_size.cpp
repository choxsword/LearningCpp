#include<iostream>

int main()
{
    int k=0;
    while(true)
    {
        try
        {
            char *p=new char[1014];
            ++k;
        }
    catch(...)
    {
        std::cout<<static_cast<float>(k)/1024/1024<<std::endl;
         throw; 
    }
    }

   

}