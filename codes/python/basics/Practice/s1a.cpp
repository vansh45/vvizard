#include <iostream>
#include <vector>
using namespace std;

int main(){
   vector<int> myvector{ 1, 2, 3, 4, 5 };
    vector<int>::iterator it;
  
    myvector.erase(myvector.begin()+1, myvector.begin()+3);
  
    // Printing the Vector
    for (auto it = myvector.begin(); it != myvector.end(); ++it)
        cout << ' ' << *it;

        vector <int> v1 (5,1);
    for (auto it = v1.begin(); it != v1.end(); ++it)
        cout << ' ' << *it;

    return 0;
}
/*
 C:\Users\hp>  cd documents

C:\Users\hp\Documents>  set path="C:\Program Files\Java\jdk-16.0.2\bin"

C:\Users\hp\Documents>       javac j1.java

C:\Users\hp\Documents>        java j1          */