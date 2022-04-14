#include <vector>
#include <iostream>

using namespace std;

int main()
{
    vector<bool> *Bits = new vector<bool>(100, true);

    for(int i=0; i<Bits->size(); i++)
    {
        cout<<(*Bits)[i]<<"\n";
    }
}
