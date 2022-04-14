#include <iostream>

using namespace std;

class add_x
{
    public:
        add_x(int val): x(val) {}
        int operator()(int y) const {return x+y;}

    private:
        int x;
};

int main(void)
{
    int y=3;
    int result;
    add_x add3(3);

    result = add3(y);
    cout<<"The result is: "<<result<<"\n";
}

