#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int i=2131, j=0;

    try
    {
        throw exception();
    }
    catch (exception &ex)
    {
        cout<<"exception caught!\n"<<ex.what()<<endl;
    }
    return 1;
}
