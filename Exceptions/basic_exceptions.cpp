#include <iostream>

using namespace std;

void mightGoWrong(){
    bool error1 = false;
    bool error2 = true;

    if(error1){
        // throw "8";
        throw "Something went wrong";
    }
    if(error2) {
        throw string("Something else went wrong");
    }
}

void usesMightGoWrong() {
    mightGoWrong();
}

int main()
{
    try {
        usesMightGoWrong();
    }
    catch(int e) {
        cout << "Error Code: " << e << endl;
    }
    catch(char const * e) {
        cout << "Error Code: " << e << endl;
    }
    catch(string &e) {
        cout << "strong error message: " << e << endl;
    }

    cout << "Still running" << endl;

    return 0;
}