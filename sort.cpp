#include<iostream>

using namespace std;

int main()

{
    int arr[5],age,i;
    
    for(i=1; i<=5;i++)
    {
        cin >> age;
        arr[age]=arr[age]+1;
    
    }
    
    for(i=1; i<=5;i++)
    {
        if(arr[i]>0)
        
        {
        
            for(int j=1; j<arr[i]; j++)
            
                cout << i << endl;
        
        }    
    }

return 0;
}
