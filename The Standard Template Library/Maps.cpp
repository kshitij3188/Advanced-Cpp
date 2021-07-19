#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int> ages;

    ages["Mike"] = 40;
    ages["Levi"] = 30;
    ages["Deku"] = 10;

    cout << ages["Levi"] << endl;

    for(map<string, int>::iterator it=ages.begin(); it != ages.end(); it++){
        
    }

    return 0;
}
