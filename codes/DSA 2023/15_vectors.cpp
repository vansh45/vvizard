#include <iostream>
#include <vector>
using namespace std;

int main(){

// initialise
    vector <int> scores;
    vector <int> s (5,10);
    vector <double> s1 {360, 6.55};

// taking input
    int a;
    for(int i=0; i<5; i++){
        cin>>a;
        scores.push_back(a);
    }
             // or 
    for(int i=0; i<5; i++){
        cin>>scores.at(i);
    }

// accessing
    scores[2] =100;  //or
    scores.at(2) =100;


// removing elements
    scores.erase(scores.begin()+2);
    scores.erase(scores.begin()+2, scores.begin()+4);


    scores.pop_back();
    for(auto u :scores){
        cout<<u<<" ";
        cout<<"there are "<<u.size()<<" elements ";
    }
     return 0;
}