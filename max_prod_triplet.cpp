#include<bits/stdc++.h>

using namespace std;

int func(int arr[], int n) {
    
    if( n < 3)
        return -1;
        
    int max_a = INT_MIN, max_b = INT_MIN, max_c = INT_MIN;
    
    int min_a = INT_MAX, min_b = INT_MAX;
    
    for(int i = 0 ; i < n; i++) {
        
        if(arr[i] > max_a) {
            
            max_c = max_b;
            max_b = max_a;
            max_a = arr[i];
        }
        
        else if(arr[i] > max_b) {
            
            max_c = max_b;
            max_b = arr[i];
            
            
        }
        
        else if(arr[i] > max_c) {
            
            max_c = arr[i];
        }
        
        if(arr[i] < min_a) {
            
              min_b = min_a;
            min_a = arr[i];
          
            
        }
        
        else if(arr[i] < min_b) {
            
            min_b = arr[i];
        }
        
        }
    
        return max(max_a * max_b * max_c, max_a * min_a * min_b);
}


int main() 
{ 
    int arr[] = { 1, -4, 3, -6, 7, 0 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
  
    int max = func(arr, n); 
  
    if (max == -1) 
        cout << "No Triplet Exists"; 
    else
        cout << "Maximum product is " << max; 
  
    return 0; 
} 
