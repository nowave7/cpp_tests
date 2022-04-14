#include <iostream>
#include <string>
#include <memory>

using namespace std;

class OnlyPrivate
{
    public:
        OnlyPrivate(){}
        ~OnlyPrivate(){}
    private:
        int member1;
        int member2;
        int method1(){cout<<"method1\n"; return 0;}
        int method2(){cout<<"method1\n"; return 0;}
};

class Friend
{
    public:
        friend int OnlyPrivate::method1();
};

int main()
{
    OnlyPrivate *ppp = new OnlyPrivate();

    //((void*)(ppp + sizeof (void*)*2 + sizeof (int)*2 ))();

   delete ppp;
   return 0;
}
