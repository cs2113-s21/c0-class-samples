import java.util.Scanner;


public class EnterNumber{

    public static void main(String args[]){

	int num;
	Scanner sc = new Scanner(System.in); // standard input (stdin)

	System.out.println("Enter a number:"); //standard output (stdout)
	num = sc.nextInt(); //read in that input, as an integer, and return
	
	System.out.println("You entered: "+num); //standard output
	/*                  \  string    / + integer       
			    automatically converted to the output you want
	 */
	
    }

}
