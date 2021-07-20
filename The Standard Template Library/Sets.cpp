#include <iostream>
#include <set>
using namespace std;

class Test {
    int id;
    string name;

public: 
    Test(int id, string name): id(id), name(name) {

    }
    void print() const {
        cout << id << ": " << name << endl;
    }

    bool operator<(const Test &other) const {
        return name < other.name;
    }
};

int main()
{
    set<int> numbers;

    numbers.insert(50);
    numbers.insert(10);
    numbers.insert(30);
    numbers.insert(20);
    numbers.insert(30);
    
    for(set<int>::iterator it=numbers.begin(); it != numbers.end(); it++) {
        cout << *it << endl;
    }

    set<int>::iterator itFind = numbers.find(30);

    if(itFind != numbers.end()) {
        cout << "Found: " << *itFind << endl;
    }

    if(numbers.count(30)) {
        cout << "Number found." << endl; 
    }

    set<Test> tests;

    tests.insert(Test(10, "Mike"));
    tests.insert(Test(20, "Joe"));
    tests.insert(Test(330, "Joe"));
    tests.insert(Test(30, "Sue"));

    for(set<Test>::iterator it = tests.begin(); it != tests.end(); it++) {
        it->print();
    }

    return 0;
}
