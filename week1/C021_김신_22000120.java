class Solution {
    public int twoCitySchedCost(int[][] costs) {
        int n = costs.length;
        int answer = 0;
        java.util.Arrays.sort(costs, new java.util.Comparator<int[]>() {
            public int compare(int[] a, int[] b) {
                return Integer.compare(a[0]-a[1], b[0]-b[1]);}
            });
        for(int i = 0 ; i < n ; i++){
            if(i < n/2) answer += costs[i][0];
            else answer += costs[i][1];
        }
        return answer;
    }
}