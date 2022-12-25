#include<iostream>
using namespace std;

int main()
{

    int *array;

    int size;

    cout<<"enter size of array"<<endl;
    cin>>size;

    array= new int(size);

    for(int i=0;i<size;i++){
        cout<<"enter elements"<<endl;
        cin>>array[i];

    }

    cout<<"[";
    for(int i=0;i<size;i++){
        cout<<array[i];

        if(i<size-1){
            cout<<",";
        }
    }
cout<<"]";

    
    return 0;
}

