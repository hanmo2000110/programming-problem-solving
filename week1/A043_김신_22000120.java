 class Solution {
    public String longestCommonPrefix(String[] strs) {
        String answer = "";
        char tmp;
        for(int i=0 ; i<strs[0].length() ; i++){
            tmp = strs[0].charAt(i); 
            for(int j=0 ; j<strs.length ; j++){
                if(i >= strs[j].length()) return answer;
                if(tmp != strs[j].charAt(i) ) return answer;     
            }
        answer += tmp;
        }
        return answer;
    }
}