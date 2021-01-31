#include <iostream>
using namespace std;

int fibonacci(int n);

int main(){

        for(int i=0; i<=9; i++){

                cout<<"Final Results"<<fibonacci(i);
                cout<<"---------------------------------------------------";

        }
        cout<<"-----------------------------------------------------";
        return 0;
}

int fibonacci(int n){
        if(n<=2){
                cout<<"Rock Bottom"<<1<<endl;
                return 1;}
        else{

                cout<<fibonacci(n-1)+fibonacci(n-2)<<" Onoing number "<<n<<endl;
                return (fibonacci(n-1)+fibonacci(n-2));

        }
}
