#include <iostream>
using namespace std;

void bubble_sort(int A[],int n)
{
    int i,j,temp;
    
    for(i=0;i<n;i++)
        {
            for(j=0;j<n-i-1;j++)
            {
                if(A[j]>A[j+1])
                {
                    temp = A[j];
                    A[j] = A[j+1];
                    A[j+1] = temp;                 
                }
            }
        }
}

    int main (void)
    {
        int i,n;
    cout << " enter the number of element : "  ;
       
    cin >> n;
    int A[n];
    
    cout << "please enter the element" << endl;
    
    for(int i=0; i<n; i++)
    {
        cin >> A[i];
    }
    
    bubble_sort( A,n);
    for(int i=0; i<n; i++)
    {
        cout << A[i] << endl;
    }
    
    
     
        }
