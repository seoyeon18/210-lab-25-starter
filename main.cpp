#include <iostream>
#include <chrono>
using namespace std;

#include <iostream>
using namespace std;

int main() {
    cout << "Program works!" << endl;
    return 0;
}

/* syntax examples:
auto start = high_resolution_clock::now()
auto end = high_resolution_clock::now()
auto duration = duration_cast<milliseconds>(end - start)
duration.count() references elapsed milliseconds
*/