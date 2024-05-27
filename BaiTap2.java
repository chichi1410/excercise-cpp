package CodeByHoa;

import java.util.Scanner;

public class BaiTap3 {
	public static void main(String[] args) {
		System.out.println("viet chuong trinh nhap tu ban phim 2 canh 1 hinh chu nhat\n" + "tinh toan va in ra");
		Scanner scanner = new Scanner(System.in);
		System.out.printf("nhap vao chieu dai : ");
		float ChieuDai = scanner.nextFloat();
		System.out.printf("nhap vao chieu rong");
		float ChieuRong = scanner.nextFloat();

		float ChuVi = (ChieuDai + ChieuRong) * 2;
		float DienTich = (ChieuDai * ChieuRong);
		float CanhMin = Math.min(ChieuDai, ChieuRong);
		System.out.println("chu vi hinh chu nhat la: " + ChuVi);
		System.out.println("dien tich hinh chu nhat la: " + DienTich);
		System.out.println("canh nho nhat la: " + CanhMin);
	}
}
