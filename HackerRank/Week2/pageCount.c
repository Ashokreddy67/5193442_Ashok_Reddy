#include <iostream>
using namespace std;
int twopages(int n,int p){
    if(p<=(n/2)){
        return p/2;
    }
    if((n%2==0)&&(n-p==1)){
     return 1;
    }
        
return (n-p)/2;
}
int main() {
    int n;
    int p;
    cout<<"enter the number of pages:";
    cin>>n;
    cout<<"enter page you want:";
    cin>>p;
    cout<<twopages(n,p);
    return 0;
}