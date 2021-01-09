import java.util.*;
import java.io.*;

class Solution {
    public int solution(int[][] board, int[] moves) {
        int answer = 0; // ����� ������ ����
        Stack<Integer> s = new Stack<Integer>();
        // moves ���̸�ŭ �ݺ��� �����մϴ�.
        
        for(int i=0; i<moves.length; i++){
            int target = 0;
            //System.out.println(s);
            //System.out.println(target);
            for(int j=0; j<board.length; j++){
                if(board[j][moves[i] - 1] != 0){ // ������ ���� �� �ִ� ��Ȳ�Դϴ�.
                    target = board[j][moves[i] - 1];
                    board[j][moves[i] - 1] = 0;  // ��ĭ���� �����մϴ�.
                    break;
                }else{
                    continue;
                }
            }
            if(target == 0){ // �ƹ��ϵ� ���� �ʽ��ϴ�.
                continue;
            }else{
                if(s.empty()){
                    s.add(target);
                }else{
                    if(s.peek() == target){
                        s.pop();
                        answer += 2;
                    }else{
                        s.add(target);
                    }
                }
            }
        }
    
        return answer;
    }
}