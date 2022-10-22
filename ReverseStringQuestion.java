public class ReverseStringQuestion

{

   public static void main(String[] args) {


       String stringExample  =  "Hello";

       System.out.println("Original string: "+stringExample);


       // Converting String to Character Array

       char str[] = stringExample.toCharArray();

       int n = str.length; // length of character array

       int start=0,end = n-1;

       while(start<=end){

           // Swapping the characters

           char temp = str[start];

           str[start] = str[end];

           str[end] = temp;

           start++;

           end--;

       }


       //  Converting characterArray to String

       String reversedString = String.valueOf(str);


       System.out.println("Reversed string: "+reversedString); //  Printing the reversed String


   }

} 
