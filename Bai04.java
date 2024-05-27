package CodeByHoa;
import java.util.Scanner;
public class Bai04 {
 public static void main(String[] args) {
	Scanner scanner = new Scanner(System.in);
    System.out.println("viet chuong trinh cho phep nhap vao so tien thue in ra ket qua\n"
    		+ "------------------------------------------------------------------------\n");
    double TienThue;
    System.out.println("nhap vao so tien thue");
    TienThue  = scanner.nextDouble();
    if(TienThue >= 15000000  &&  TienThue <= 30000000) {
    	System.out.println("tien thue cua ban la 20%");
    }else if(TienThue > 30000000) {
    	System.out.println("tien thue la 50%");
    }else {
    	System.out.println("tien thue la 10%");
    }
    scanner.close();
}
}