#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    //declaration
    unordered_map <string,int> um;

    //inserting
    pair <string,int>p1;
    p1.first = "raja";
    p1.second = 96;
    um.insert(p1);
    // ********* or *********
    um.insert({"ritesh",87});

    // ********** or *********
    um["rishu"] = 92;

    // Accessing values
    cout<<"Raja's Marks : "<<um["raja"]<<endl;

    //Searching
    if(um.find("ritesh") != um.end()){
        cout<<"Exists"<<endl;
    }

    //size
    cout<<um.size()<<endl;

    //deleting
    um.erase("raja");

    cout<<um.size()<<endl;

    um["rishu"] = 99;
    //display
    for(auto &p : um){
        cout<<p.first<<" "<<p.second<<endl;
    }

    return 0;
}