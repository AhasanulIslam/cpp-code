#include<iostream>
using namespace std;

int binarySearch(int ara[],int n, int keyWord)
{
    int low,mid,high;
    low = 0;
    high = n-1;
    
    while(low<=high)
    {
        mid = (low+high)/2;
        if(keyWord>ara[mid]) low = mid+1;
        else if(keyWord<ara[mid]) high = mid-1;
        else return mid+1;
    }
    if(low>high) return -1;
}

int main()
{
    int ara[] = {12,24,25,60,62,70};
    int n = 6;
    int keyWord = 24;
    int loc = binarySearch(ara,n,keyWord);
    
    if(loc!=-1) cout << keyWord << " found at location " << loc << "th" << endl;
    else cout << keyWord << " not found!" << endl;



    return 0;
}
