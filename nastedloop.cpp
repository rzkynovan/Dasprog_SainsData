#include <iostream>
using namespace std;
int main(){
int i, j, n;
n=5;

for ( i = 1; i<=n; i++)
{
    for ( j = n; j >= 1; j--)
    {
        cout<<j<<i;
    }

    cout<<endl;
    
}


return 0;
}