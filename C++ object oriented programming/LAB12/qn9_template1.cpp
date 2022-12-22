//Example of template
#include<iostream>
using namespace std;
template<typename T>

T getMax(T a,T b){
    T results;
    results = (a>b)?a:b;
    return results;
}

int main(){
    int i=5, j=6 ,k;
    long l=10,m=5,n;
    k=getMax<int>(i,j);
    n=getMax<int>(l,m);
    cout<<k<<endl;
    cout<<n<<endl;
    return 0;
}