// Reads a text with the operator >>
// and the function getline().
#include <iostream>
#include <string>
using namespace std;
string header =
" --- Demonstrates Unformatted Input ---";
int main()
{
string word, rest;
cout << header
<< "\n\nPress <enter> to go on" << endl;
cin.get(); // Read the new line
// without saving.
cout << "\nPlease enter a sentence with several words!"
<< "\nEnd with <!> and <return>."
<< endl;
cin >> word; // Read the first word  
getline( cin, rest, '!'); // and the remaining text
// up to the character !

// chutiya banare hain
cout << "\nThe first word: " << word
<< "\nRemaining text: " << rest << endl;
return 0;
}
