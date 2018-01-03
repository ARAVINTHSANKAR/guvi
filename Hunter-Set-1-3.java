package samples;

import java.util.Scanner;

public class ReapeatedNum {
	
	public int[] getReapeatedNum() {		
		int arraySize;
		int count,i = 0;		

		Scanner sc = new Scanner(System.in);
		System.out.println("enter the number of numbers you want to find");

		arraySize = sc.nextInt();
		int arrayBefore[] = new int[arraySize];
		int sameNums[] = new int[arraySize];

		System.out.println("enter the numbers");

		for (count = 0; count <= arraySize - 1 ; count++) {
			arrayBefore[count] = sc.nextInt();			
		}
		sc.close();

		for (count = 0; count <= arraySize - 1; count++) {
			if (arrayBefore[count] == count) {								
				sameNums[i] = arrayBefore[count];	
				i++;
			} else {}
		}
		System.out.println("Matched NUmbers are:");
		for (i = 0 ; i <= sameNums.length - 1; i++) {
			if(sameNums[i] != 0 && sameNums[0] == 0) {
				System.out.println(sameNums[i]);
			} else {}
		}
		return sameNums;		
	}
	public static void main(String args[]) {
		ReapeatedNum rn = new ReapeatedNum();
		rn.getReapeatedNum();
	}
}
