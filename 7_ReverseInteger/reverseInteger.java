public class reverseInteger {
    class Solution {
        public static int reverse(int x) {
            long pow = 1;
            for(int i=0; i<31; i++){
                pow = pow * 2;
            }
            long ans = 0;
    
            while (x!=0){
                ans *= 10;
                ans += x%10;
                x = x/10;
            }
    
            if(ans>=pow || ans <=-1 * pow){
                return 0;
            }
    
            return (int) ans;
        }
    }

    public static void main(String[] args){
        int x = 123;

        System.out.println(Solution.reverse(x));
    }
}
