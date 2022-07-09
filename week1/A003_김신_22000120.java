class Solution {
    public int[] plusOne(int[] digits) {
        int[] answer = new int[digits.length + 1];

        digits[digits.length - 1] += 1;
        for(int i = 1 ; i <= digits.length ; i++){
            if(digits[digits.length - i] == 10){
                if(digits[0] == 10){
                    digits[digits.length - i] = 0;
                    answer[0] = 1;
                    for(int j = 0 ; j < digits.length ; j++){
                        answer[j+1] = digits[j];
                    }
                    return answer;
                }
                digits[digits.length - i] = 0;
                digits[digits.length - i-1] += 1;
            }
        }
        return digits;
    }
}