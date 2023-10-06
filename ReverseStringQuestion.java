/*this is your code 
import java.io.*;
import java.util.Scanner;
  
class GFG {
    public static void main (String[] args) {
        
        String str= "Geeks", nstr="";
        char ch;
        
      System.out.print("Original word: ");
      System.out.println("Geeks"); //Example word
        
      for (int i=0; i<str.length(); i++)
      {
        ch= str.charAt(i); //extracts each character
        nstr= ch+nstr; //adds each character in front of the existing string
      }
      System.out.println("Reversed word: "+ nstr);
    }
}*/


//This is my solution
import java.util.Scanner;

class GFG {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Enter a word: ");
        String str = input.nextLine();

        String reversedStr = reverseString(str);

        System.out.println("Original word: " + str);
        System.out.println("Reversed word: " + reversedStr);

        input.close();
    }

    public static String reverseString(String str) {
        StringBuilder reversed = new StringBuilder();
        for (int i = str.length() - 1; i >= 0; i--) {
            reversed.append(str.charAt(i));
        }
        return reversed.toString();
    }
}

