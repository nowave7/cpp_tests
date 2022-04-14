#include <iostream>
#include <memory>

using namespace std;

int main(void)
{
    int a = 12345;
    int &ref_a = a;
    int *const ptr_a = &a;

    cout<<"a: "<<a<<"\n&a: "<<&a<<"\nref_a: "<<ref_a<<"\n&ref_a"<<&ref_a<<"\nptr_a: "<<ptr_a<<"\n";
    return 1;
}
