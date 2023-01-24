// --- check palindrome words ---
// those words when read from backward is also same ex nitin

#include <iostream>
using namespace std;

int main(){
    cout<< " enter n  ";
    int n;
    cin>>n;
    cout<< " enter word with n character ";
    char arr[n+1];
    cin>>arr;

    bool check = 1;
    for (int i=0; i<n; i++)
    {
        if(arr[i] != arr[n-1-i]){  //1st =last , 2nd = 2nd last

            check = 0;
            break;
        }}
    
    if (check == true){
    cout<<" word is a palindrome"<<endl;}
    else{
        cout<< " word is not a palindrome";
    }
    return 0;
}