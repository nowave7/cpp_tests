#include <iostream>

#include "Templates.h"

using namespace std;

int main(int argc, char **argv)
{
    Stack<int> stack;
    int i=0;
    int out_item=0;
    bool ret_val=false;

    for (i=0; i<13; i++)
    {
        ret_val = stack.push(i);
        if (!ret_val)
        {
            cout<<"The stack is full!"<<"\n";
            ret_val = stack.empty();
            if (ret_val)
            {
                cout<<"stack cleared!"<<"\n";
            }
        }
        else
        {
            cout<<"pushed to stack: "<<i<<"\n";
        }
    }

    for (i=0; i<13; i++)
    {
        ret_val = stack.pop(out_item);
        if (ret_val)
        {
            cout<<"Popped from stack: "<<out_item<<"\n";
        }
        else
        {
            cout<<"stack is empty"<<"\n";
            break;
        }
    }

    return 1;
}
