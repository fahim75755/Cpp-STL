#include<bits/stdc++.h>
using namespace std;


int main(){
    vector<int>adj[100];//array of 100 vec


    /*
    int arr[100];        // array of 100 ints
    string names[50];          // array of 50 strings  
    vector<int> adj[100];      // array of 100 vectors

     adj[0][0] = 1  (0th vector, 0th element)
     adj[0][1] = 2  (0th vector, 1st element)
     adj[0][2] = 3  (0th vector, 2nd element)
    */

    adj[0].push_back(1);
    adj[0].push_back(2);
    adj[0].push_back(3);
    
    adj[1].push_back(4);
    adj[1].push_back(5);
    
    adj[2].push_back(6);
    adj[2].push_back(7);


    cout << "adj[0][0] = " << adj[0][0] << endl;  
    cout << "adj[0][1] = " << adj[0][1] << endl;  
    cout << "adj[1][0] = " << adj[1][0] << endl;

    for(int i = 0; i < 10; i++) {
        cout << "adj[" << i << "].size() = " << adj[i].size() << endl;
    }

}