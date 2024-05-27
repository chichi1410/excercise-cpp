package CodeByHoa;

import java.util.Arrays;

public class Bai11 {
	public static void main(String[] args) {
		System.out.println("bai 11 sap xep mang");
		int[] mang = { 15, 10, 4, 5, 3 };
		System.out.println("mang truoc khi sap xep: " + Arrays.toString(mang));
		for (int i = 0; i < mang.length; i++) {
			for (int j = i + 1; j < mang.length; j++) {
				if (mang[i] > mang[j]) {
					int temp = mang[i];
					mang[i] = mang[j];
					mang[j] = temp;
				}
			}
		}
		System.out.println("mang sau khi sao xep: " + Arrays.toString(mang));
	}
}
