import java.util.*;
import java.io.*;

class Solution {
    public int solution(int n, int[] lost, int[] reserve) {
        int answer = 0;
        
        int[] people = new int[n];
        
        for(int i=0; i<n; i++){
            people[i] = 1; // ��� ü������ �ִٰ� �����մϴ�.
        }
        
        // ���� ü������ �ִ� �л��� ������ ������Ʈ�մϴ�.
        for(int i=0; i<reserve.length; i++){
            people[reserve[i] - 1] = 2;
        }
        
        // ü������ �������� �л��� ������ ������Ʈ�մϴ�.
        for(int i=0; i<lost.length; i++){
            people[lost[i] - 1] -= 1;
        }
        
        
        // 1�� �л����� Ž���մϴ�.
        for(int i=0; i<n; i++){
            if(people[i] >= 1){ // ü������ 1�� �̻� ������ �Ѿ�ϴ�.
                answer += 1;
            }
            else if(people[i] == 0){
                if(i != n - 1 && people[i + 1] == 2){ // �޹�ȣ ģ������ ü������ �����ϴ�.
                    answer += 1;
                    people[i + 1] -= 1;
                }
                else if(i != 0 && people[i - 1] == 2){ // �չ�ȣ ģ������ ü������ �����ϴ�.
                    answer += 1;
                    people[i - 1] -= 1;
                }
            }
        }
        
        return answer;
    }
}