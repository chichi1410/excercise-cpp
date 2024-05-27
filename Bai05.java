package CodeByHoa;
import java.util.Scanner;
public class Bai05 {
public static void main(String[] args) {
	Scanner scanner = new Scanner(System.in);
	System.out.println("chuong trinh lua chon thuc don\n");
	System.out.println("     >> MENU <<     ");
	System.out.println("+------------------+");
	System.out.println("| 1.ca vien chien  |");
	System.out.println("| 2.tra sua        |");
	System.out.println("| 3.chan ga        |");
	System.out.println("| 4.ket thuc       |");
	System.out.println("+------------------+");
	System.out.println("lua chong cua ban la: ");
	int LuaChon = scanner.nextInt();
	switch(LuaChon) {
	case 1:
		System.out.println("ban da chon ca vien chien");
		break;
	case 2:
		System.out.println("ban da lua chon tra sua");
		break;
	case 3:
		System.out.println("ban da lua chon chan ga");
		break;
	case 4:
		System.out.println("ban da ko chon mon nao ca");
		break;
	//
		default:
	    System.out.println("lua chon khong hop le");
	}
	scanner.close();
}
}
