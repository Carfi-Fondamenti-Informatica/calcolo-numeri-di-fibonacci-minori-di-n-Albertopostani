#include <iostream>
using namespace std;
int main() {
    int n=0,primo=1,secondo=0,risultato=0;
    cin>>n;
    while(risultato<=n){
        risultato=primo+secondo;
        primo=secondo;
        secondo=risultato;
        cout<<risultato<<endl;
        risultato=primo+secondo;
    }
return 0;
}

