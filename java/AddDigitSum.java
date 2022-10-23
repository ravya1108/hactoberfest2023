import java.util.Scanner;
public class AddDigitSum {
	public static void main(String[] args) {
		Scanner scan=new Scanner(System.in);
		System.out.println("Enter Number");
		int n=scan.nextInt();
		int rem=0;
		int sum=0;
		while(n>0)
		{
			rem=n%10;
			sum+=rem;
			n/=10;
		}
		System.out.println("Sum of digits :  "+sum);
	}
}
