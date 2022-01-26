#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>
using namespace std;


vector< char > foo(list< Human >& people)
{
    vector< char > ret_v(people.size());
    for_each(begin(people), end(people), [](Human& person) { person.birthday(); });
    transform(begin(people), end(people), rbegin(ret_v), [](Human& person) 
    {
        if (person.isMonster() == true)
            return 'n';
        else
            return 'y';
    });

   return ret_v;
}
