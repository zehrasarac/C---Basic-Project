#include<bitstring.h>
#include<stdlib.h>
#include <stdio.h> 
#include<iostream>
using namespace std; 
  
void ZigZag(string s, int numRows){ 
    
    if(numRows == 1){ 
      cout<<s;       
      return; 
    }    
    int n = s.length(); 
    string a[numRows]; 
    int row = 0; 
    bool down; 
    
    for(int i=0; i<n; ++i){//i=0 -> 1 kez, i<n -> n+1 kez, i++ -> n kez 
    //Toplamda 2n+2 
        a[row].push_back(s[i]); //DÖngü n kez çalışacağı için n kere çalışıyor

        if(row == numRows-1) //eşit olma durumu 1 kez çalışır
          down = false; 
  
        else if (row == 0) //1 kez çalışır
          down = true; 
  
        if(down){ 
          row++; //1 kez 
        }  
        else{ 
          row--; //1 kez
        }  
    } 
    //toplamda 3n+6 T(n) = n
    //lineer zamanlı O(N) =n
  
    for(int i=0; i<numRows; ++i) //i=0 -> 1 kez, i<numRows -> numRows+1 kez çalışacak,i++ -> numRows kez 
    //toplamda 2numRows = 2n
        cout<<a[i]; //1 kez
    // 2n +1 T(n) = n
    //lineer zamanlı O(n).
} 
int main(){ 
    string s = "ABCDEF"; 
    int r = 2; 
    ZigZag(s, r); 
    return 0; 
}