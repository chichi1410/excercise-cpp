package CodeByHoa;
import java.util.Scanner;
public class Bai07{
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		System.out.println("chuong trinh phuong trinh bac nhat aX+b=0");
		System.out.println("nhap a: ");
		int a = scanner.nextInt();
		System.out.println("nhap b: ");
		int b = scanner.nextInt();
		if(a == 0 && b == 0) {
			System.out.println("phuong trinh vo so nghiem");
		}else if( a == 0 && b != 0) {
			System.out.println("phong trinh vo nghiem");
		}else {
			int x = -b/a;
			System.out.println("nghiem cua phuong trinh la: " + x);
		}
		
		scanner.close();
	}
}
