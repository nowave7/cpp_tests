#include <string>
#include <iostream>
#include <memory>

using namespace std;

class Bla
{
    private:
        string x;
    public:
        Bla(){}
        Bla(string y): x(y){}
        ~Bla(){}
        string get(){return x;}
        void set(string y){x=y;}
};

class PBla
{
    private:
        Bla *bla_ptr;
    public:
        Bla get(){return *bla_ptr;}
        void set(Bla bla){*bla_ptr=bla;}
        PBla();
        PBla(Bla bla):bla_ptr(&bla){}
        ~PBla();
};

int main()
{
    Bla *some_object1 = new Bla("11111");
    Bla some_object("12345");
    unique_ptr<Bla> bla_ptr(new Bla("22222"));
    unique_ptr<Bla> bla_ptr1(new Bla("33333"));
    unique_ptr<Bla> bla_ptr2 = make_unique<Bla>(*some_object1);

    cout <<some_object.get()<<"\n";
    cout <<&some_object<<"\n";
    cout<<bla_ptr.get()<<"\n";
    cout<<bla_ptr1.get()<<"\n";
    cout<<bla_ptr->get()<<"\n";
    cout<<bla_ptr1->get()<<"\n";
}


