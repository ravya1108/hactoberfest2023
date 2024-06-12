import java.util.Scanner;

public class DecimalToBinary {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a decimal number: ");
        try {
            int decimalNumber = scanner.nextInt();

            if (decimalNumber < 0) {
                System.out.println("Binary representation is not defined for negative numbers.");
            } else {
                String binaryRepresentation = decimalToBinary(decimalNumber);
                System.out.println("Binary representation of " + decimalNumber + " is: " + binaryRepresentation);
            }
        } catch (java.util.InputMismatchException e) {
            System.out.println("Invalid input. Please enter a valid decimal number.");
        }
        scanner.close();
    }

    public static String decimalToBinary(int n) {
        if (n == 0) {
            return "0";
        }
        StringBuilder binary = new StringBuilder();
        while (n > 0) {
            int remainder = n % 2;
            binary.insert(0, remainder);
            n = n / 2;
        }
        return binary.toString();
    }
}
