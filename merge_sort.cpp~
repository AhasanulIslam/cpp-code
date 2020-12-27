#include <iostream>
using namespace std;

    void merge(int A[], int left, int right, int mid)
    {
        int i;
        int index_a,index_l,index_r,size_left,size_right;
        
        size_left=mid-left+1;
        size_right= right-mid;
        
        int L[size_left], R[size_right];
        
        for (i = 0; i< size_left; i++)
        L[i] = A[left + i];
        
        for(i = 0; i < size_right; i++)
        R[i] = A[mid + 1 +i];
        
        index_l=0;
        index_r=0;
        
        for(index_a=left; index_l<size_left && index_r < size_right; index_a++)
        {
           if( L[index_l] < R[index_r])
           {
            A[index_a]=L[index_l];
            index_l +=1;
          
           }
           else
           {
            A[index_a]=R[index_r];
            index_r +=1;
           }
        }
        while(index_l < size_left)
        {
            A[index_a] = L[index_l];
            index_l +=1;
            index_a +=1;
        }
    }
    

void merge_sort(int A[], int left, int right)
    {
        if(left >= right)
        return; 
        
        int mid = left + (right - left)/2;
        
        merge_sort(A, left, mid);
        merge_sort(A,right,mid+1);
        
        merge(A,left,right,mid);
        
    }
    
    
    
    int main(void)
    {
    int i,n;
    cout << "please enter the number of element : " ;
    cin >> n;
   
    int A[n];
    
    cout << "please enter the element" << endl;
    
    for(int i=0; i<=n; i++)
    
        cin >> A[i];
    
    merge_sort( A, 0,  n);
    
    for(i=0; i<=n; i++)
    cout << A[i] << "  " ; 
    
    }
