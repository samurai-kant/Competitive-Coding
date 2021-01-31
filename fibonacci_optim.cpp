#include <iostream>
#include <vector>

using namespace std;

int fib(int n, vector<int> &vec){
        cout<<n<<"Vec Size :"<<vec.size()<<endl;
        if(n<=2){
                cout<<"N is lesser than 2"<<endl;
                return 1;}
        
        if(vec.size() >= n){
                cout<<"Size is "<<n<<endl;
                cout<<"already calculated "<<vec.at(n-1);
                return vec.at(n-1);}

        vec.push_back(fib(n-1, vec) + fib(n-2, vec));
        return vec.at(n);
}

int main(){
       int n;
       vector<int> vec;
       cin>>n;
       cout<<n<<endl;
       cout<<"Result: "<<fib(n,vec);
       return 0;
}
