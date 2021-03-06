class Solution {
    public String solution(int a, int b) {
        int[] month = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        String[] day = {"THU", "FRI", "SAT", "SUN", "MON", "TUE", "WED"};
        int total = 0;
        for(int i=1; i<a; i++){
            total += month[i - 1];
        }
        total += b;
        return day[total % 7];
    }
}