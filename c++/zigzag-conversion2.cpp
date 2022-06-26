#include<bitstring.h>
#include<stdlib.h>
#include <stdio.h> 
#include<iostream>
using namespace std; 

string zigZagConcat(string s, int n)
{
    if (n <= 1)
    {
        return s;
    }
    string result = "";

    for (int rowNum = 0; rowNum < n; rowNum++)//i=0 -> 1 kez, i<n -> n+1 kez, i++ -> n kez 
    {
        int i = rowNum;
        bool up = true;
        
        while (i < s.length())//n 
        {
 
            result += s[i];
 
            
            if (rowNum == 0 || rowNum == n - 1)
            {
                i += (2 * n - 2);
            }
            else
            {
                if (up)
                {
                    i += (2 * (n - rowNum) - 2);
                }
                else
                {
                    i += rowNum * 2;
                }
                up ^= true;
            }
        }
    }
    return result;
    //lineer zamanlı O(n^2)
}
 

int main()
{
    string str = "ABCDEF";
    int n = 2;
    cout<< zigZagConcat(str, n);
}