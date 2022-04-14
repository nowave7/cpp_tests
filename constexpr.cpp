#include <iostream>

using namespace std;

constexpr int some_number =1;
constexpr double some_number1 = 5/3;

constexpr int some_func()
{
    return some_number + some_number1;
}

constexpr int some_func1(int a)
{
    int result=0;
    for (int i=0; i<=a; i++)
    {
        result +=i;
    }

    return result;
}

int main(int argc, char** argv)
{

    if (argc!=2)
    {
        exit(-1);
    }

    cout<<"some number is: "<<some_number<<"\n";
    cout<<"some func: "<<some_func()<<"\n";

    cout<<"some func1: "<<some_func1(4)<<"\n";
    cout<<"some func1: "<<some_func1(atoi(argv[1]))<<"\n";
    return some_number;
}
