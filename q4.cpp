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

void display(int number) {
    const int bits = sizeof(int) * 8; // Calculate the number of bits in an int
    cout << number << " in binary: ";

    // Iterate through each bit from the most significant to the least significant
    for (int i = bits - 1; i >= 0; --i) {
        int bit = (number >> i) & 1; // Right shift and mask to get the bit value
        cout << bit;
    }
    cout << endl;
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

