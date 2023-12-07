#include<iostream>
#include<String>

using namespace std;

class Solution {
public:
    static int myAtoi(string s) {
        bool negative = false;
        long int num = 0;
        int i=0;

        while(s[i]==' ') i++;

        if (s[i]=='-'){
          negative=true;
          i++;
        }
        else if (s[i]=='+') i++;
        
        while (s[i]=='0') i++;
        int j=0;
        while (int(s[i])>=48 && int(s[i])<=57){
          if (j==11) break;
          int x = int(s[i]);
          num = (num*10) + (x-48);
          i++;
          j++;
        }

        if(negative && num>=2147483648)
          num = 2147483648;
        else if(num>2147483647)
          num = 2147483647;

        return (negative ? (-1*num) : num);
    }
};

int main() {

    string s = "345234325jkl";
    
    cout << Solution::myAtoi(s) << endl;

    return 0;
}