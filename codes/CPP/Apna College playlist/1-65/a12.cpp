 // ----binary to decimal---- v16 backlog half v

 #include <iostream>
 using namespace std;
 int binarytodecimal( int n)
 {
int ans = 0;
int x =1;
while (n>0)
{
    int y= n%10;
    ans += x*y;
    x*= 2; // for octal do 8
    n/=10;
}
return ans;

 }
 int main(){
     int n;
     cin>>n;

     cout<< binarytodecimal(n)<<endl;
 
     return 0;
 }
 // hexadecimal chhut gaya v16