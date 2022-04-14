#include <iostream>
#include <string>

class TextInput
{
public:
    TextInput(){}
    virtual void add(char c) { m_Text +=c; }

    std::string getValue() { return m_Text; }
protected:
    std::string m_Text;
};

class NumericInput : public TextInput
{
public:
    void add(char c)
    {
        if ((c>=48) && (c<=57))
        {
            m_Text += c;
        }
    }
};

#ifndef RunTests
int main()
{
    NumericInput* input = new NumericInput();
    input->add('1');
    input->add('a');
    input->add('0');
    input->add('9');
    std::cout << input->getValue();
}
#endif
