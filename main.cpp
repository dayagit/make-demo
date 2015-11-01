#include <iostream>
#include "fns.h"
int main()
{
int n;
print_hello();
std::cout<<" this is main"<<std::endl;
std::cout<<"enter the number";
std::cin>>n;
std::cout<<"the factorial of "<<n<< " is "<< factorial(n)<<std::endl;
std::cout<<"mai function";
return 0;
}

