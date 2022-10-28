import java.util.Scanner;

public class Ex12AreaofCircle{

    public static void main(String args[]){
		
		Scanner userIn = new Scanner(System.in);
		
		System.out.println("Enter Radius Of Circle: ");
		float radius = userIn.nextFloat();
		
		double areacircle = Math.PI * radius * radius;
		
		System.out.println("The Area Of The Circle is: " + areacircle);
        
    }
}



