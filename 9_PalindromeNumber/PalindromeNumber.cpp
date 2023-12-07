#include<iostream>

using namespace std;

class Solution {
public:
    static bool isPalindrome(int x) {

      if(x<0) return false;

        unsigned int y = 0;
        int temp = x;
        while (x!=0){
            y = (y*10) + (x%10);
            x = x/10;
        }

        return (y==temp);
    }
};

int main() {

    int num = 121;
    cout << (Solution::isPalindrome(num) ? "true" : "false") << endl;

    return 0;
}