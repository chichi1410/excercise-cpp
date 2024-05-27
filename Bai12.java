package CodeByHoa;
import java.util.Scanner;
public class Bai12 {
public static void main(String[] args) {
	Scanner scanner = new Scanner(System.in);
	System.out.println("nhap vao 1 so nguyen bat ky: ");
	int value = scanner.nextInt();
	int count = 0;
	for(int i=2 ; i <= value -1 ; i++) {
		if(value % i == 0) {
			System.out.println("uoc so khac: " + i);
			count++;
			break;
		}
	}
	if(count == 0) {
		System.out.printf("%d la so nguyen to" , value);
	}else {
		System.out.printf("%d khong phai la so nguyen to" , value);
	}
	scanner.close();
}
}
