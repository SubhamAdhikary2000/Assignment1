#include <iostream>
using namespace std;
void verifyTwosComplement(int number) {
    // Two's complement verification using bitwise NOT and add 1
    int twosComplement = (~(-number)) + 1;
    cout << "Two's complement verification:" << endl;
    cout << "Original negative number: " << number << endl;
    cout << "Computed Two's complement: " << twosComplement << endl;
    cout << "Are they equal? " << (number == twosComplement ? "Yes" : "No") << endl;
}
void display(int x){
    int size;
    size=32;
    bool bits[size];
    for(int i=0; i<size;++i){
        bits[i]= false;
    }
    for(int i=0;i<size;++i){
        if(x&(1<<i)){
                bits[i]=true;
            }
    }
    
    for(int i=size-1;i>0;--i){
        if(bits[i])
            cout<<1;
        else 
            cout<<0;
    }
    cout<< endl;
}

int main(){
    int x,y;
    cout<<"Enter a positive and a negative integer"<<endl;
    cin>>x>>y;
    cout<<"Memory representation of the positive integer:"<<endl;
    display(x);
    cout<<"Memory representation of the Negative integer:"<<endl;
    display(y);
    cout << "\nTwo's Complement Verification:" << endl;
    verifyTwosComplement(y);

}

