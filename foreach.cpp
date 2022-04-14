#include <iostream>

using namespace std;

int main(void)
{
    int array_int[5]={1,2,3,4,5};

    for (int element : array_int)
    {
        cout<<element<<'\n';
    }
    return 1;
}
