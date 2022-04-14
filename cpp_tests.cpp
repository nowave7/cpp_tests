#include <cstring>
#include <memory>
#include <algorithm>
#include <iostream>

using namespace std;

class mystring
{
    private:
        char *data;

    public:
        mystring(){}

        mystring(const char *p)
        {
            size_t size = strlen(p)+1;
            data = new char[size];
            memcpy(data, p, size);
        }

        ~mystring()
        {
            cout<<"\ndata: "<<&data<<"\n";
            cout<<"destructor called for object: "<<data<<"\n";
            delete[] data;
        }

        mystring(const mystring& source)
        {
            size_t size = strlen(source.data)+1;
            data = new char[size];
            memcpy(data, source.data, size);
        }

//        mystring(mystring &&source)
//        {
//            data = source.data;
//            source.data = nullptr;
//        }

        char *getData()
        {
            cout<<"\ndata: "<<&data<<"\n";
            return data;
        }

        mystring* operator+(const mystring *a) const
        {
            mystring *newdata = new mystring("");
            strcat(newdata->data, this->data);
            strcat(newdata->data, a->data);

            return newdata; 
        }

        mystring operator+(mystring a)
        {
            mystring newdata;
            size_t this_size = strlen(this->data);
            size_t source_size = strlen(a.data);
            newdata.data = new char[strlen("12345678")];
            strcpy(newdata.data,"12345678");
            
            memcpy(newdata.data, this->data, this_size);
            memcpy(newdata.data+this_size, a.data, source_size);
            newdata.data[this_size + source_size + 1] = '\0';

            return newdata; 
        }
};


class abc { 
   public: 
      static int x; 
      int i; 

      abc() {
         i = ++x;
      }
   };
int abc::x;

void just_a_test()
{
   abc m, n, p;
   
   cout<<m.x<<" "<<m.i<<endl;
}

int main(void)
{
    char *x = (char*)"Some text";
    char *y = (char*)"string data";

    mystring *a = new mystring(x);
    mystring *b = new mystring(y);
    mystring a1("1234");
    mystring b1("5678");
    mystring *c = new mystring("Some other string");
    mystring *d = new mystring(*a);
    mystring *e = new mystring("");
    mystring f;
    e = a->operator+(b);
//    e = a + b;
    f = a1.operator+(b1);
    f = a1 + b1;

    cout<<"a: "<<a->getData()<<"\n";
    cout<<"b: "<<b->getData()<<"\n";
    cout<<"c: "<<c->getData()<<"\n";
    cout<<"d: "<<d->getData()<<"\n";
    cout<<"e: "<<e->getData()<<"\n";
    cout<<"f: "<<f.getData()<<"\n";


    return 1;
}
