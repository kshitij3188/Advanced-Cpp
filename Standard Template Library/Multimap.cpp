#include <iostream>
#include <map>
using namespace std;


int main()
{
    multimap<int, string> lookup;

    lookup.insert(make_pair(30,"Mike"));
    lookup.insert(make_pair(20,"Levi"));
    lookup.insert(make_pair(30,"Deku"));
    lookup.insert(make_pair(50,"Kira"));

    for(multimap<int, string>::iterator it=lookup.begin(); it != lookup.end(); it++){
        cout << it->first << ": " << it->second << endl;
    }

    cout << endl;

    for(multimap<int, string>::iterator it=lookup.find(20); it != lookup.end(); it++){
        cout << it->first << ": " << it->second << endl;
    }

    cout << endl;
    auto its = lookup.equal_range(30);
    
    for(multimap<int, string>::iterator it=its.first; it != its.second; it++){
        cout << it->first << ": " << it->second << endl;
    }

    return 0;
}
