#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector <int> v1 {23 , 45, 56};
  v1.push_back(34);
    for(int i=0; i<v1.size(); i++){
        cout<<v1.at(i) <<"  ";
    }
    return 0;
}