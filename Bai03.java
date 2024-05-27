package CodeByHoa;

import java.util.Scanner;

public class Bai03 {
 public static void main(String[] args) {
	Scanner scanner = new Scanner(System.in);
	System.out.println("viet chuong trinh nhap vao tu ban phim canh cua 1 khoi lap phuong\n"
			+ "tinh va in ra the tich cua khoi lap phuong ( the thich = canh^3)\n"
			+ "--------------------------------------------------------------------------");
	System.out.println("nhap vao canh cua hinh lap phuong: ");
	int Canh = scanner.nextInt();
	double TheTich = Math.pow(Canh, 3);
	System.out.println("the thich cua khoi lap phuong la: " + TheTich);
	scanner.close();
	
	
}
}
