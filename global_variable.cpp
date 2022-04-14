#include <iostream>
#include <memory>

class A
{
public:
    A(){std::cout<<"this gets executed before main!\n";}
    A(int input):i{input}{std::cout<<"this gets executed before main with: "<<i<<"\n";}
private:
    int i;
    std::string string;
};

A some_global_var(1);

int main()
{
    std::cout <<"only here does the main start!\n";
    return 0;
}
