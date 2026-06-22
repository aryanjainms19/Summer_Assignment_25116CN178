#include <iostream>
#include <vector>
using namespace std;

void reverseStr(vector <char> str){
    vector <char> reversed;
    while(!str.empty()){
        char lastchar = str.back();
        reversed.push_back(lastchar);
        str.pop_back();
    }
    for(char c: reversed){
        cout << c;
    }
} 

int main(){
    string word;
    cout << "Enter the word!" << endl;
    cin >> word;

    vector <char> str(word.begin(),word.end());

    reverseStr(str);
    return 0;
}