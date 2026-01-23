#include<cstdio>
#include <cstring> 
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        return false;
        int y = x;
        char arr[20];
        char re[20];
        int i;
       char temp;
        sprintf(re,"%d",y);
        sprintf(arr,"%d",x);
         int n = strlen(arr);
        for(i=0;i<n/2;i++){
            temp = arr[i];
            arr[i] = arr[n-i-1];
            arr[n-i-1] = temp;
        }
        if(strcmp(arr, re) == 0)
            return true;
            else
            return false;

        

    }
};
