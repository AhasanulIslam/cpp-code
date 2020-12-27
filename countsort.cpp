#include <iostream>
using namespace std;

void countingSort(int arr[],int n,int max)
    {
        int count [5000] = {0}, i, j;
        
        for(i=0; i<n; i++)
        count[arr[i]] = count[arr[i]]+1;
        
        for(i=0; i<=max; i++){
        for(j=1; j<=count[i]; j++)
        cout << i << "  ";
        }
        
        }

int main(void)
{
    int n,i,max=0;
    cout << "please enter the number of element" << endl;
    
    cin >> n;
    int arr[n];
    
    cout << "please enter the element" << endl;
    
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    
    if(arr[i]>max)
    max=arr[i];
    }
    
    countingSort(arr, n, max);
    
    return 0;
    
}
