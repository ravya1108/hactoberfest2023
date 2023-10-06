#include <iostream>
#include <unordered_map>
#include <random>

using namespace std;

int main() {
    unordered_map<int, int> myMap;

    // generate 10,000 random integers and insert into map
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dist(1, 100000);
    for (int i = 0; i < 10000; i++) {
        int num = dist(gen);
        myMap.insert({num, i});
    }

    // print map size
    cout << "Map size: " << myMap.size() << endl;
    cout << "Load factor: " << myMap.load_factor() << endl;

    // print map contents
    for (const auto& [key, value] : myMap) {
        cout << key << ": " << value << endl;
    }

    return 0;
}

