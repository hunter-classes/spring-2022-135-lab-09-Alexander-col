#include <iostream>
using namespace std;

string * createAPoemDynamically() {
    string *p = new string;
    *p = "Roses are red, violets are blue";
    return p;
}

int main() {
    while(true) {
        string *p;
        p = createAPoemDynamically();

        std::cout << *p << std::endl;

        // assume that the poem p is not needed at this point

        // I am assuming that the program is running and it not crashing my computer becuause my terminal does not say "killed"
    }
}
