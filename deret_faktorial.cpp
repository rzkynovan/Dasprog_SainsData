#include <iostream>
using namespace std;
int main(){
int n, deret, sum;
deret=1, sum=0;

cout<<"Masukkan jumlah deret yang diinginkan : ";
cin>>n;

for ( int i = 1; i <= n; i++)
{
    deret = deret*i;
    sum = sum+deret;

    cout<< deret << ", ";
}
cout<< endl << "total : ";
cout<< sum;

}