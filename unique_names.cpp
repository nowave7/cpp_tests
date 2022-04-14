#include <iostream>
#include <vector>

std::vector<std::string> unique_names(const std::vector<std::string>& names1, const std::vector<std::string>& names2)
{
    std::vector<std::string> resulting_vector;
    bool found=false;

    for (unsigned int i=0; i<names1.size(); i++)
    {
        for (unsigned int j=0; j<resulting_vector.size(); j++)
        {
            if (resulting_vector[j]==names1[i])
            {
                found=true;
            }
        }
        if (!found)
        {
            resulting_vector.push_back(names1[i]);
        }
        found=false;
    }

    found=false;

    for (unsigned int i=0; i<names2.size(); i++)
    {
        for (unsigned int j=0; j<resulting_vector.size(); j++)
        {
            if (resulting_vector[j]==names2[i])
            {
                found=true;
            }
        }
        if (!found)
        {
            resulting_vector.push_back(names2[i]);
        }
        found=false;
    }

    return resulting_vector;
}

#ifndef RunTests
int main()
{
    std::vector<std::string> names1 = {"Emma", "Ava", "Emma", "Olivia", "Ava"};
    std::vector<std::string> names2 = {"Olivia", "Sophia", "Emma", "Sophia"};
    
    std::vector<std::string> result = unique_names(names1, names2);
    for(auto element : result)
    {
        std::cout << element << ' '; // should print Ava Emma Olivia Sophia
    }
}
#endif
