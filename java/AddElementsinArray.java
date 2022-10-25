import java.util.Scanner;
public class AddElementsInArray {
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter Array Size");
		int size=sc.nextInt();
		System.out.println("Enter Elements of an Array");
		int array[]= new int[size];
	                  for(int i=0;i<size;i++) {
		array[i]=sc.nextInt();}
		int sum=0;
		for(int i:array)
		{
			sum+=i;
		}
		System.out.println("Sum of Elements of Array : "+sum);
	}
}
