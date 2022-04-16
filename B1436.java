package BeakJoon;

import java.util.Scanner;

public class B1436 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int num = sc.nextInt();
		int count = 1;
		int def = 666;
		
		while(count != num) {
			def++;
			
			if(String.valueOf(def).contains("666")) // String.valueof(a) => a를 String 형으로 변환
				count++;                            // contains 문자열 포함 여부 확인 함수
			
			
		}
		System.out.println(def);
	}
}
