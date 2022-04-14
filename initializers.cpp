#include <iostream>

using namespace std;

class TestClass
{
    public:
        TestClass():m_member{10}{}
        int GetMember(){ return m_member;}
        ~TestClass(){}

    private:
        int m_member;
};

int main(void)
{
    TestClass *test = new TestClass();

    cout << test->GetMember();

    delete test;
    return 0;

}

int TestClass::GetMember()
{
    return 0;
}
