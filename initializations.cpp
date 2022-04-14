#include <iostream>
#include <string>


int global_int = 0;
int global_int1{1};
int global_int2(2);
std::string global_string = "some global string";
std::string global_string1 {"some global string 1"};
std::string global_string2 ("some global string2");

int main()
{
    int local_int = 0;
    int local_int1 {1};
    int local_int2 (2);
    std::string local_string = "some local string";
    std::string local_string1 = "some local string 1";
    std::string local_string2 = "some local string 2";

    std::cout<<"global variable: int "<<global_int<<"\n";
    std::cout<<"global variable: int1 "<<global_int1<<"\n";
    std::cout<<"global variable: int2 "<<global_int2<<"\n";

    std::cout<<"global variable: string "<<global_string<<"\n";
    std::cout<<"global variable: string1 "<<global_string1<<"\n";
    std::cout<<"global variable: string2 "<<global_string2<<"\n";

    std::cout<<"local variable: int "<<local_int<<"\n";
    std::cout<<"local variable: int1 "<<local_int1<<"\n";
    std::cout<<"local variable: int2 "<<local_int2<<"\n";

    std::cout<<"local variable: string "<<local_string<<"\n";
    std::cout<<"local variable: string1 "<<local_string1<<"\n";
    std::cout<<"local variable: string2 "<<local_string2<<"\n";

    return 0;
}
