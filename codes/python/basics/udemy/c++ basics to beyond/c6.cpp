#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector <int> v1 {23 , 45, 56};
  v1.push_back(34);
    vector <int> v2 {25 , 12};
    vector <vector<int>> v2d;
    v2d.push_back(v1);
    v2d.push_back(v2);
    
        cout<<v2d.at(0).at(2) <<"  ";
   cout<<v2d[1][2];
    return 0;
}