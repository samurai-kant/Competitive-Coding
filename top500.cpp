#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <tuple>

using namespace std;

int main(){
        tuple<int, int> arr[1000000];
        int bookkeepingarr[1000];
        int i = 0;
        int count = 0;
        srand(time(NULL));
        for(i=0; i<1000000;i++){
                //srand(i);
                get<0>(arr[i]) = i;
                get<1>(arr[i]) = rand()%1000+1;
                //cout<<rand()%1000+1<<" ";
        }
        for(i=0; i<1000; i++){
                bookkeepingarr[i] = 0;
                //cout<<bookkeepingarr[i]<<"|";
        }
        for(i=0; i<1000000;i++){
                //cout<<get<1>(arr[i])<<"| ";
                 bookkeepingarr[get<1>(arr[i])]++;
        }
        for(i=0; i<1000;i++){
                cout<<bookkeepingarr[i]<<"|";
        }
        i = 0;
        /*
        while(count<500){
                cout<<i<<" "<<bookkeepingarr[i]<<endl;
                count += bookkeepingarr[i++];
        }*/
        return 0;
}


