#include <bits/stdc++.h> 
using namespace std; 

int floorSearch(int arr[], int l, int r, int x) 
{ 
    if (r > l) { 
        int mid =(r + l) / 2;

        if (arr[mid] == x) 
            return mid; 

        if (arr[mid] > x) 
            return floorSearch(arr, l, mid - 1, x); 

        return floorSearch(arr, mid + 1, r, x); 
    } 
    if(r<=l)

        return l; 
    return 0;
            
}
int main(void) 
{ 
    int n;
    cin>>n;
    
    int arr[n]; 
    int x ; 

    cin>>x;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int result =floorSearch(arr, 0, n - 1, x); 

    if(arr[result]==x)
    cout<< x;
    else if(arr[result]<x&&arr[result+1]>x)
        {
                cout<< arr[result];
        }
        else
        {
            if(arr[result]>x&&result!=0)
            cout<< arr[result-1];
            else
            cout<<-1;
        
            
            
        }

}