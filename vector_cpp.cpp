#include <iostream>
#include <vector>

using std::vector;
using std::cout;

int sum(const vector<int> &v);

int main(void)
{
    vector<int> v={1, 2, 3, 4, 5};

    cout << sum(v) << "\n";

    return 0;
}

int sum(const vector<int> &v)
{
    int result = 0;
    for (size_t i=0; i<v.size(); i++)
        result += v[i];
    return result;
}
