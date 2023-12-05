#include <iostream>

using namespace std;

class Solution {
public:
    static int reverse(int x) {
        long long int ans=0;
        
        while (x!=0){
            ans *= 10;
            ans += x%10;
            x = x/10;
        }

        if(ans>=2147483648 || ans <=-2147483648){
            return 0;
        }

        return ans;
    }
};

int main(){

    int x = 1534236469;

    cout << Solution::reverse(x) << endl;

    return 0;
}