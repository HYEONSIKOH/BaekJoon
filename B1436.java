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
			
			if(String.valueOf(def).contains("666")) // String.valueof(a) => a�� String ������ ��ȯ
				count++;                            // contains ���ڿ� ���� ���� Ȯ�� �Լ�
			
			
		}
		System.out.println(def);
	}
}
