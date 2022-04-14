#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>

int main()
{
    int total=0;
    std::vector<int> some_vector = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

    std::for_each(some_vector.begin(), some_vector.end(), [total](int x)mutable{total+=x;});
    std::cout<<"total: "<<total<<"\n";
    std::for_each(some_vector.begin(), some_vector.end(), [&total](int x){total+=x;});
    std::cout<<"total: "<<total<<"\n";
    total=0;
    for (long unsigned int i=0;i<some_vector.size();i++)
    {
        total +=i;
    }
    std::cout<<"total: "<<total<<"\n";

    return 0;
}

