#include <iostream>
using namespace std;

int main (void)
{
    int i,n,sum=0;
    cin >> n;
     
    cout << "SUM OF SERIES" << endl;
    for (i=0;i<n;i++){
    sum=sum+i;
    cout << i << "\t \t" << sum << endl;
    }
    return 0;
       
}
