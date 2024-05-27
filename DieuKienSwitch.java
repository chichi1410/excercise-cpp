package CodeByHoa;

import java.util.Scanner;

public class DieuKienSwitch {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		System.out.println("nhap vao ca thu trong tuan: ");
		int day = scanner.nextInt();
		switch (day) {
		case 2:
			System.out.println("Monday");// thu 2
			break;
		case 3:
			System.out.println("tuesday"); // thu 3
			break;
		case 4:
			System.out.println("Wednesday");// thu 4
			break;
		case 5:
			System.out.println("thursday");// thu 5
			break;
		case 6:
			System.out.println("Friday"); // thu 6
			break;
		case 7:
			System.out.println("Saturday"); // thu 7
			break;
		case 8:
			System.out.println("Sunday"); // chunhat
			break;

		default:
			System.out.println("error re-enter");
		}
		scanner.close();
	}
}