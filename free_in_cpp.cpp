#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
    int *p = (int*)malloc(sizeof(int));
    cout<<"Allocated memory at: "<<p<<"\n";
    *p = 12;
    free(p);
    cout<<"Freed memory at: "<<p<<"\n";

    try
    {
        cout <<"Dereference freed pointer...\n";
        cout<<*p;
    }
    catch (std::exception &e)
    {
        cout<<"Null reference exception!\n";
    }
    return 0;
}
