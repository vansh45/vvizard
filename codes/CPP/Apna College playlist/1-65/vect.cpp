// vectors 
#include <vector>
#include <iostream>
using namespace std;

int main(){
    vector<int> v; // declaring a vector 

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

for(int i=0; i<v.size(); i++){
    cout<<v[i]<<endl;
    // 1 2 3 

    vector<int>::iterator it;
    for(it =v.begin(); it!=v.end(); it++){
        cout<<*it<<endl;
        // 1 2 3 
    }
    for(auto element:v){
        cout<<element<<endl;
    }  // 1 2 3 
}
    v.pop_back(); //1 2 

vector<int> v2 (3, 50);
// 50 50 50

// swap is a function in vector 
swap(v ,v2);
 for(auto element:v){
        cout<<element<<endl;
    } 

     for(auto element:v2){
        cout<<element<<endl;
    }
     pair <int , char > p; // can be any two 
    p.first =3;
    p.second ='f';
    cout<<p.second;

    
     // other member functions can be seen on google
     return 0;

}