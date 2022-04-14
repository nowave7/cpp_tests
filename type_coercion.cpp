#include <iostream>
#include <string>
#include <exception>
#include <algorithm>

using namespace std;

string operator+(string string, int number)
{
    return string + to_string(number);
}

int operator+(int number, string string)
{
    try
    {
        return stoi(string) + number;
    }
    catch (std::exception)
    {
        cout<<"Unable to convert string"<<string<<" to int!"<<"\n";
        return 0;
    }
}

int operator-(string string, int number)
{
    try
    {
        return stoi(string) - number;
    }
    catch (std::exception)
    {
        cout<<"Unable to convert string"<<string<<" to int!"<<"\n";
        return 0;
    }
}

int main()
{
    string two = "2";
    cout<< (two + 2)<<"\n";
    cout<< (2 + two)<<"\n";
    cout<< (two - 2)<<"\n";

    return 0;
}
