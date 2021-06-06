class Solution {
    public int[][] merge(int[][] intervals) {
        Arrays.sort(intervals, (a, b) -> Integer.compare(a[0], b[0]));
        List<int[]> tmp = new ArrayList<>();
        tmp.add(intervals[0]);
        for(int i = 1; i < intervals.length; i++) {
            int[] pre = tmp.get(tmp.size() - 1);
            int[] cur = intervals[i];
            if(pre[1] >= cur[0]) {
                pre[0] = Math.min(pre[0], cur[0]);
                pre[1] = Math.max(pre[1], cur[1]);
                tmp.set(tmp.size() - 1, pre);
            }
            else tmp.add(cur);
        }
        return tmp.toArray(new int[tmp.size()][]);
    }
}
