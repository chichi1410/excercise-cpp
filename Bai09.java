package CodeByHoa;
import java.util.Scanner;
public class Bai09 {
public static void main(String[] args) {
	System.out.println("viet chuong trinh tinh so tien dien");
	Scanner scanner = new Scanner(System.in);
	System.out.println("nhap vao so tien dien: ");
	int TienDien = scanner.nextInt();
	if(TienDien >= 0 && TienDien <= 100) {
		int a = TienDien *1000;
		System.out.println("gia dien la: " + a );
	}else {
		int a = 100 * 1000 + (TienDien - 100)* 1500;
		System.out.println("so tien dien la: " +  a );
	}
	scanner.close();
}
}
