package CodeByHoa;

import java.util.Arrays;

public class Array {
	public static void main(String[] args) {
		String[] clubs = { "manchester city", "liverpool", "MU" };
		System.out.println("premier leagua clubs rankings: " + Arrays.toString(clubs));
		System.out.println("clubs premier leagua: " + clubs.length);
		System.out.println("top 1: " + clubs[0]);
		System.out.println("top 2: " + clubs[1]);
		System.out.println("top 3: " + clubs[2]);

	}
}
