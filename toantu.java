package CodeByHoa;

import java.util.Scanner;

public class toantu {
	public static void main(String[] args) {
		Scanner scanner =  new Scanner(System.in);
		System.out.println("nhap a: ");
		int a = scanner.nextInt();
		System.out.println("nhap b: ");
		int b = scanner.nextInt();
		System.out.println("min : " + Math.min(a, b));
		scanner.close();
	}
}
