#include <iostream>
#include <vector>
#include <memory>

using namespace std;

template<typename T> T add(T a, T b);

int main()
{
    vector<int> vec1={1, 2, 3, 4, 5};
    vector<int> vec2{};

    
    for (auto i : vec1)
        cout<< i <<"\n";
    
    vec2 = vec1;

    for (auto i : vec1)
        cout<< i <<"\n";
    for (unsigned int i=0; i<vec2.size(); i++)
        ++vec2[i];
    for (auto i : vec2)
        cout<< i <<"\n";
    for (auto i : vec1)
        cout<< i <<"\n";

    vec1 = move(vec2);

    for (auto i : vec1)
        cout<< i <<"\n";

    return 0;
}

template<typename T>
T add(T a, T b)
{
    return a+b;
}
