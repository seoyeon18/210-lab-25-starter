#include <chrono>

auto start = chrono::high_resolution_clock::now();

vector<string> v;
for (auto &s : codes) {
    v.push_back(s);
}

auto end = chrono::high_resolution_clock::now();
auto v_read = chrono::duration_cast<chrono::nanoseconds>(end - start).count();

cout << "Vector Read: " << v_read << endl;
/* syntax examples:
auto start = high_resolution_clock::now()
auto end = high_resolution_clock::now()
auto duration = duration_cast<milliseconds>(end - start)
duration.count() references elapsed milliseconds
*/