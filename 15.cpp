#include <iostream>
#include <deque>
using namespace std;
int main (){
    deque <int> deq;
    char ch;
    int a;
    while (cin>>ch){
        if (ch== '!')break;
        switch(ch){
        case'+':
            cin>>a;
            deq.push_front(a);
            break;
        case'-':
            cin>>a;
            deq.push_back(a);
            break;
        case '*':
            if (deq.size()==0){
                cout<<"error" <<endl;
                break;
            }
            if (deq.size() == 1){
                cout << deq.front() + deq.back()<<endl;
                deq.pop_back();
                break;
            }
            cout << deq.front() + deq.back() <<endl;
            deq.pop_front();
            deq.pop_back();
            break;
        }
             return 0;
    }
}