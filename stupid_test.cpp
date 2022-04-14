#include <iostream>
#include <memory>
#include <string>

using namespace std;

template <typename T> T greater_than(T a, T b)
{
    return (a>b? a : b);
}

class some_class
{
    private:
        int a;
        double b;
    public:
        some_class(){}
        some_class(int a, double b): a(a), b(b){};
        ~some_class(){}
        int get_a(){return a;}
        int get_b(){return b;}
        void set_a(int x){a=x;};
        void set_b(double x){b=x;};
        bool operator>(const some_class &a){return true;};
        string serialize()
        {
            string tmp1, tmp2;

            tmp1 = to_string(a);
            tmp2 = to_string(b);
            tmp1+= " "+tmp2;
            return tmp1;
        }
};

int main(void)
{
    some_class a(1, 1.0);
    some_class b(2, 2.0);
    some_class c;
    
    c = greater_than(a, b);

    cout<<c.serialize()<<"\n";

    return 1;
}

