#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
    srand((int) time(0));

    int arrayA[10];
    int arrayB[10];
    int arraysuma[10];
    
    for(int i=0; i<=9; i++){
        arrayA[i]=rand () % 10+1;
        cout<<arrayA[i]<<endl;

    }

    cout<<"<------------------------------------------------>"<<endl;

    for(int i=0; i<=9; i++){
        arrayB[i]=rand () % 10+1;
        cout<<arrayB[i]<<endl;

    }

    cout<<"<------------------------------------------------>"<<endl;
    cout<<"el resultado es"<<endl;
    cout<<"\n";
    cout<<"\t |"<<endl;
    cout<<"\t |"<<endl;
    cout<<"\t |"<<endl;
    cout<<"\t |"<<endl;
    cout<<"\t |"<<endl;
    cout<<"\t |"<<endl;
    cout<<"\t *"<<endl;
    cout<<"\n";
    


    for(int i=0; i<=9; i++){
        arraysuma[i]=arrayB[i]+arrayA[i];
        cout<<"\t"<<arraysuma[i]<<endl;
    
    }

    cout<<"<------------------------------------------------>"<<endl;


return 0;

    
}
