#include<iostream>
#include<set>
using namespace std ;
int main()
{
    set<int> s ;
    s.insert(7) ;
    s.insert(0) ;
    s.insert(4) ;
    s.insert(6) ;
    s.insert(4) ;
    for(auto i: s )
    {
        cout<<i<<" "  ;
    }
    cout<<endl ;
}
