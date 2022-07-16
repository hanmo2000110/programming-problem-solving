class Solution {
    public List<List<Integer>> generate(int numRows) {
        List<List<Integer>> biglist = new ArrayList<List<Integer>>();   
        
        for(int i = 0 ; i < numRows ; i++)
            biglist.add(new ArrayList<Integer>());
        
        biglist.get(0).add(1);
        
        
        if(numRows == 1) return biglist;
        else{
            for(int i = 1 ; i < numRows ; i++){
                biglist.get(i).add(1);
                for(int j = 0 ; j < i-1 ; j++){
                    biglist.get(i).add( biglist.get(i-1).get(j) + biglist.get(i-1).get(j+1) );
                }
                biglist.get(i).add(1);
            }
        } 
            
        
        return biglist;
    }
}