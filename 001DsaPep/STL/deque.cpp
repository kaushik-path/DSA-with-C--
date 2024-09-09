#include<bits/stdc++.h>
using namespace std;

int main(){
    deque<int> d;
    d.push_back(1); //insert from back 1
    d.push_back(4); //insert from back 1
    d.push_back(7); //insert from back 1
    d.push_front(2); //insert from front 2
    d.push_front(3); //insert from front 2
    d.push_front(6); //insert from front 2

    d.pop_back();
    d.pop_front();

    for (int i:d){
        cout<<i<<" "<<endl;
    }

    cout<<"print element at index 1 : "<<d.at(1)<<endl;
    cout<<"front : "<<d.front()<<endl;
    cout<<"Back : "<<d.back()<<endl;
    cout<<"empty or not : "<<d.empty()<<endl;

    cout<<"Before erase : "<<d.size()<<endl;
    for(int i : d){
        cout<<i<<" "<<endl;
    }
    d.erase(d.begin(),d.begin()+1);
    cout<<"After erase : "<<d.size()<<endl;
    for(int i : d){
        cout<<i<<" "<<endl;
    }


    return 0;
}