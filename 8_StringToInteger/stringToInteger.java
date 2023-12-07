public class stringToInteger {
    class Solution {
        public static int myAtoi(String s) {
            boolean negative = false;
            long num = 0;
            int i=0;
            int ll=s.length();
    
            if(ll==0) return 0;
            while(s.charAt(i)==' '){
              i++;
              if(i==ll) return 0;
            }
    
            if (s.charAt(i)=='-'){
              negative=true;
              i++;
            }
            else if (s.charAt(i)=='+') i++;
            if(i==ll) return 0;
            
            while (s.charAt(i)=='0'){
              i++;
              if(i==ll) return 0;
            }
            if(i==ll) return 0;
            int j=0;
            while ((int)s.charAt(i)>=48 && (int)s.charAt(i)<=57){
              if (j==11) break;
              int x = (int)s.charAt(i);
              num = (num*10) + (x-48);
              i++;
              if(i==ll) break;
              j++;
            }
            
            long l=2147483647;
            if(negative && num>= l+1)
              num = -1*(l+1);
            else if(num>l)
              num = l;
            else if(negative)
              num = num*-1;
    
            return (int)num;
        }
    }

    public static void main(String[] args){
        String s="123e";

        System.out.println(Solution.myAtoi(s));
    }
}
