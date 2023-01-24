#include <iostream>
#include <string>
using namespace std;


int main(){

    // append - add 

    string s1= "fam";
    string s2 = "ily";

 /*   s1.append(s2);  
    cout<< s1<<endl;   */

//  s2.compare(s1) will compare their lengths
    cout<< s1 + s2 <<endl;

    string s3 = "environment";
    s3.erase(4 , 2);
    cout << s3 <<endl;

    cout <<s2.find ("ly")<<endl;

    s3.insert(2,"vvvv");
    cout<<s3<<endl;

    cout<<s3.length()<<endl;

    for(int i=0; i<s1.length(); i++)
    cout<<s1[i]<<endl;

    string s = s3.substr(6 , 3);
    cout <<s<<endl;

    string s4 = "333";
    int x = stoi(s4);
    cout << x+2<<endl;

    int y = 444;
    cout << to_string(y) +"gg"<<endl;
    


    return 0;
}