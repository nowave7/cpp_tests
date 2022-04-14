#include <iostream>

using namespace std;

template <typename SomeType>
struct SomeStructure
{
    typedef typename SomeType::type type;
    typedef SomeType typedtype1;
    type some_var;
};

class A
{
    public:
    typedef int type;
    int member1;
};

int main()
{
    SomeStructure<A> blab;

    return 0;
}
