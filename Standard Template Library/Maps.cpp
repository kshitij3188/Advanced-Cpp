#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int> ages;

    ages["Mike"] = 40;
    ages["Levi"] = 30;
    ages["Deku"] = 10;

    ages["Mike"] = 70;

    ages.insert(make_pair("Peter", 100));

    cout << ages["Levi"] << endl;

    cout << ages["Sue"] << endl;

    if(ages.find("Deku") != ages.end()) {
        cout << "Found Deku" << endl;
    }
    else {
        cout << "Key not found" << endl;
    }

    for(map<string, int>::iterator it=ages.begin(); it != ages.end(); it++){
        pair<string, int> age = *it;

        cout << age.first << ": " << age.second << endl;
    }

    for(map<string, int>::iterator it=ages.begin(); it != ages.end(); it++){
        cout << it->first << ": " << it->second << endl;
    }

    return 0;
}
