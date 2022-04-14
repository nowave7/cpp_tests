#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    std::vector<int> array = { 1, 2, 3, 4, 5 };
    double total = 0;

    for_each(array.begin(), array.end(),
            [&](int x){
            total += x;
            });

    cout << "Sum: " <<total<<endl;
}

