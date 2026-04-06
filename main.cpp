#include <chrono>
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> codes;
    ifstream fin("codes.txt");
    string line;

    while (getline(fin, line)) {
        codes.push_back(line);
    }

    cout <<codes.size()<< endl;


auto start = chrono::high_resolution_clock::now();

vector<string> v;
for (auto &s : codes) {
    v.push_back(s);
}

auto end = chrono::high_resolution_clock::now();
long long vectorTime = 
    chrono::duration_cast<chrono::nanoseconds>(end - start).count();

cout << "Vector Read: " <<vectorTime << endl;

return 0;
}

/* syntax examples:
auto start = high_resolution_clock::now()
auto end = high_resolution_clock::now()
auto duration = duration_cast<milliseconds>(end - start)
duration.count() references elapsed milliseconds
*/