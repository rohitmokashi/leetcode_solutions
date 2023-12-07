public class palindromeNumber {
    class Solution {
        public static boolean isPalindrome(int x) {
            if(x < 0) { return false; }
    
            int temp = x;
            long y = 0;
    
            while (x!=0) {
                y = (y*10) + (x%10);
                x = x/10;
            }
    
            return (temp == y);
        }
    }

    public static void main(String[] args){
        
        int num = -121;
        System.out.println(Solution.isPalindrome(num));
    }
}
