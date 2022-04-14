#include <memory>
#include <string>
#include <iostream>

using namespace std;

class Animal
{
    protected:
        string m_name;
        string m_kind;

    public:
        Animal();
        Animal(string name, string kind):m_name(name), m_kind(kind){}
        ~Animal();
        void animal_sleep(bool isSleeping);
        virtual void display_animal()=0;
};

class Dog: public Animal
{
    public:
        Dog(string name, string kind):Animal(name, kind){}
        void display_animal() override;

};

class Cat : public Animal
{
    public:
        Cat(string name, string kind):Animal(name, kind){}
        void display_animal() override;
};


int main(int argc, char *argv[])
{
    Dog some_dog={"doggo","shepherd"};
    Cat some_cat={"kitty", "persian"};

    some_dog.display_animal();
    some_dog.animal_sleep(true);

    some_cat.display_animal();
    some_cat.animal_sleep(false);

    return 0;
}

Animal::Animal()
{
}

Animal::~Animal()
{
}

void Animal::display_animal()
{
    cout<<"animal is: "<<m_kind<<" named: "<<m_name<<"\n";
}

void Animal::animal_sleep(bool isSleeping)
{
    if (isSleeping)
        cout<<"animal is sleeping..."<<"\n";
    else
        cout<<"animal is not sleeping..."<<"\n";
}

void Dog::display_animal()
{
    cout<<"dog is: "<<m_kind<<" named: "<<m_name<<"\n";
}

void Cat::display_animal()
{
    cout<<"cat is: "<<m_kind<<" named: "<<m_name<<"\n";
}

