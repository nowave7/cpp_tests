#include <iostream>

using namespace std;

namespace X
{
    template<typename T1>
    struct string {
        // member template function
        template<typename T2>
        int compare(const T2&);
        // constructors can be templates too
        template<typename T2>
        string(const std::basic_string<T2>& s) { /*...*/ }
    };
}

template<typename T1> template<typename T2> int X::string<T1>::compare(const T2& s) { return 0; }

int main ()
{
    class A
    {
        public:
            A(){a=5;};
            ~A(){};
            int getA(){return a;};
        private:
            int a;
    };

    A a;

    std::cout << a.getA()<<"\n";



    // out of class definition of string<T1>::compare<T2> 
    return 0;
}
