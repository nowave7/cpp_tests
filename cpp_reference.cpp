#include <cstdlib>
#include<iostream> 
using namespace std; 

class TestClass
{
    private:
        int &reference;
        int *pointer;
    public:
        void Print();
        TestClass(int &some_reference);
        ~TestClass();
};

TestClass::TestClass(int &some_reference):reference(some_reference)
{
    pointer = &some_reference;
}

TestClass::~TestClass()
{
}

void TestClass::Print()
{
    cout<<"Ponter value: "<<*pointer<<"\n";
}

int main (int argc, char *argv[])
{
    int a = 1234;
    int &some_int_ref = a;
    int *some_int_ptr = &a;

    TestClass test(some_int_ref);
    test.Print();
    return 1;
}
