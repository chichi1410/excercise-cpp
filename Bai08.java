package CodeByHoa;

import java.util.Scanner;

public class Bai08 {
	public static void PhuongTrinhBacNhat(int a, int b) {
		if (a == 0 && b == 0) {
			System.out.println("phuong trin  co vo so nghiem");
		} else if (a == 0 && b != 0) {
			System.out.println("phuong trinh vo nghiem");
		} else {
			float x = -b / a;
			System.out.println("nghiem cua phuong trinh la: " + x);
		}
	}

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		System.out.println("viet chuong trinh bac 2");
		System.out.println("nhap a: ");
		int a = scanner.nextInt();
		System.out.println("nhap b: ");
		int b = scanner.nextInt();
		System.out.println("nhap c: ");
		int c = scanner.nextInt();
		System.out.println("giai phuong trinh :" + a +"x^2 +" + b + "x +" + c + " = 00");
		if (a == 0) {
			PhuongTrinhBacNhat(a, b);
		} else {
			int delta = b * b - 4 * a * c;
			if (delta < 0) {
				System.out.println("phuong trinh v0 nghiem");
			} else if (delta == 0) {
				int NghiemKep = -b / (2 * a);
				System.out.println("phuong trinh co nghiem kep" + NghiemKep);
			} else {
				double x1 = (-b + Math.sqrt(delta)) / (2 * a);
				double x2 = (-b - Math.sqrt(delta)) / (2 * a);
				System.out.println("phuong trinh co  2 nghiem phan biet");
				System.out.println("nghiem x1 = " + x1);
				System.out.println("nghiem x2 = " + x2);
			}
		}
		scanner.close();
	}
}
