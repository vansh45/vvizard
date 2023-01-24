#include<iostream>

using namespace std;

int main(){

int age;

cout<<" tell me your age"<<endl;
cin>>age;

if (age<18){
cout<< "you cannot drive\n";

}
else if (age >=18 && age <50 ){
cout << " you can drive\n";
}
else {  
    cout<< " sorry ";
}
    return 0;
}
