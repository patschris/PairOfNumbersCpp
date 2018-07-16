#include <iostream>
#include <algorithm>
#include <string>
#include <list>
#include <map>

using namespace std;

// Input format : x|y
class In {

    private:
        int x,y;

    public:
        In(int a,int b) {
            x=a;
            y=b;
        }

        int getx() {
            return x;
        }

        int gety() {
            return y;
        }
};


int main(void) {
    int a,b;
    string s;
    list<In> l; // list for input data
    map<int,map<int,int>> m; // using a map inside a map
    map<int,map<int,int>>::iterator it;
    // Read from cin
    while (cin >> s) {
        // Seperate first from second part of the input
        int pos = s.find("|");
        a = stoi(s.substr(0, pos));
        b = stoi(s.substr(pos+1, s.size()));
        // Don't want duplicate entries in the map
        // If entry a|b doesn't already exist, create it
        if (m[a].find(b) == m[a].end()) m[a][b] = m[a].size();
        l.push_back(In(a,b));
    }
    for (auto li=l.begin(); li!=l.end(); ++li) { // for each element in the list of inputs
        a = li->getx();
        b = li->gety();
        cout << a << "|" << b << "[" << m[a][b] << " of " << m[a].size() << "]" << endl; // print the proper message
    }
    return 0;
}
