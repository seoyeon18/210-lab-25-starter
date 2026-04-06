#include <chrono>
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <list>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    vector<string> codes;
    ifstream fin("codes.txt");
    string line;

    while (getline(fin, line)) {
        codes.push_back(line);
    }

    cout << "Loaded"  <<codes.size()<< endl;


auto start = chrono::high_resolution_clock::now();

vector<string> v;
for (auto &s : codes) {
    v.push_back(s);
}

auto end = chrono::high_resolution_clock::now();
long long vectorTime = 
    chrono::duration_cast<chrono::nanoseconds>(end - start).count();

    start = chrono::high_resolution_clock::now();

    list<string> lst;
    for (const string& code : codes) {
        lst.push_back(code);
    }

    end = chrono::high_resolution_clock::now();
    long long listReadTime =
        chrono::duration_cast<chrono::nanoseconds>(end - start).count();

    start = chrono::high_resolution_clock::now();

    set<string> st;
    for (const string& code : codes) {
        st.insert(code);
    }

    end = chrono::high_resolution_clock::now();
    long long setReadTime =
    chrono::duration_cast<chrono::nanoseconds>(end - start).count();


    vector<string> vecSort = codes;
    start = chrono::high_resolution_clock::now();
    sort(vecSort.begin(), vecSort.end());
    end = chrono::high_resolution_clock::now();
    long long vectorSortTime =
        chrono::duration_cast<chrono::nanoseconds>(end - start).count();



    list<string> listSort(codes.begin(), codes.end());
    start = chrono::high_resolution_clock::now();
    listSort.sort();
    end = chrono::high_resolution_clock::now();
    long long listSortTime =
        chrono::duration_cast<chrono::nanoseconds>(end - start).count();

    long long setSortTime = -1;



cout << "Vector Read: "     << vectorTime << endl;
cout << "List read time:   " << listReadTime << " ns" << endl;
cout << "Set read time:    " << setReadTime << " ns" << endl;
return 0;
}




/* syntax examples:
auto start = high_resolution_clock::now()
auto end = high_resolution_clock::now()
auto duration = duration_cast<milliseconds>(end - start)
duration.count() references elapsed milliseconds
*/