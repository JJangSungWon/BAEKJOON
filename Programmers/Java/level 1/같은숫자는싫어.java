import java.util.*;

public class Solution {
    public int[] solution(int []arr) {
        int pre = arr[0];
        
        // ���ӵ� ���� -1�� ǥ���մϴ�.
        for(int i=1; i<arr.length; i++){
            if(arr[i] == pre){
                arr[i] = -1;
            }
            else{
                pre = arr[i];
            }
        }
        ArrayList<Integer> list = new ArrayList<Integer>();
        for(int i=0; i<arr.length; i++){
            if(arr[i] != -1){
                list.add(arr[i]);
            }
        }
        int[] answer = new int[list.size()];
        for(int i=0; i<list.size(); i++){
            answer[i] = list.get(i);
        }
        return answer;
    }
}