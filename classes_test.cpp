#include <iostream>
#include <vector>
#include "classes_test.h"

using namespace std;

void TestClass::show()
{
    cout<<"First name: "<<name<<"\n";
    cout<<"Last name: "<<last_name<<"\n";
    cout<<"Unique id: "<< unique_id <<"\n";
}

int main()
{
    vector<int> some_vector = {1, 2, 3, 4, 5};
    for (auto &x : some_vector)
    {
        x++;
        cout << x<<"\n";
    }
    for (auto x : some_vector)
    {
        cout << x <<"\n";
    }
    TestClass test = TestClass("Vladimir", "Baus", 1);
    TestClass *test1 = new TestClass("Sebastian", "Baus", 2);
    test.show();
    test1->show();
    return 0;
}
