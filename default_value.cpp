#include <iostream>

class A
{
public:
    static int method1(int a=1, int b=0);
};

int A::method1(int a, int b)
{
    return a+b;
}


int main()
{
    std::cout<<A::method1(2)<<"\n";

    return 0;
}
