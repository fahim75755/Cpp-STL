#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);//makes the cin,cout faster
#define endl '\n'

int main(){

    optimize();

    string s3 ="starctony";
    if(s3.find("tom")!=-1)
    cout<<"found"<<endl;
    else cout<<"not found"<<endl;
    //find returns -1 if the searched string isnt present



    string s = "Hello World!";

    string lowerStr = s; // Copy for lowercase
    string upperStr = s; // Copy for uppercase

    // Convert to lowercase
    transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(), ::tolower);

    // Convert to uppercase
    transform(upperStr.begin(), upperStr.end(), upperStr.begin(), ::toupper);
//upper/lower str.begin after second comma indicates destination or where it will be stored
    cout << "Lowercase: " << lowerStr << endl; // Output: hello world!
    cout << "Uppercase: " << upperStr << endl; // Output: HELLO WORLD!
    
    return 0;
}

