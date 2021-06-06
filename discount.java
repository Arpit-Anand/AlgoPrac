class Solution {
    public int[] finalPrices(int[] prices) {
        int discount = 0;
        for(int i = 0; i < prices.length; i++) {
            int j = i + 1;
            discount = 0;
            while(j < prices.length) {
                if(j > i && prices[i] >= prices[j]) {
                    discount = prices[j];
                    break;
                }
                j++;
            }
            prices[i] = prices[i] - discount;
        }
        return prices;
    }
}
