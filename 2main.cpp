#include "Vector.hpp"
#include "string.hpp"

int main()
{
    Vector<string*> v;
    v.push_back(new string("Hello"));
    v.push_back(new string("Bye"));




}