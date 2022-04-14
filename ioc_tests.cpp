#include <iostream>

using namespace std;

class interface
{
    public:
        virtual ~interface() = default;
        virtual void print_test()=0;
        virtual void print_hello_world() = 0;
};

class implementation1: public interface
{
    public:
        virtual void print_test()
        {
            cout<<"TEST!\n";
        };

        virtual void print_hello_world()
        {
            cout<<"HELLO WORLD!\n";
        };
};

class implementation2: public interface
{
    public:
        virtual void print_test()
        {
            cout<<"test!\n";
        };

        virtual void print_hello_world()
        {
            print_test();
            cout<<"hello world!\n";
        };
};

class consumer
{
    public:
        consumer(interface *inject_dep):dep(inject_dep)
        {
            if(dep == nullptr){
                throw std::invalid_argument("service must not be null");
            }
        };
        ~consumer(){};
        void Print1()
        {
            dep->print_test();
        };
        void Print2()
        {
            dep->print_hello_world();
        };
    private:
        interface *dep = nullptr;
};

int main(int argc, char **argv)
{
    interface *class1 = new implementation1();
    interface *class2 = new implementation2();

    consumer consumer1(class1);

    consumer1.Print1();
    consumer1.Print2();

    return 1;
}
