import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int x = sc.nextInt();
		int t = sc.nextInt();

		System.out.println((x - t > 0) ? x - t : 0);

		sc.close();


	}

}