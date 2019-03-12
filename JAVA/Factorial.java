import java.util.Scanner;

public class Factorial{
	static int factorial(int num){
		int fact = 1;
		if(num == 0)
			return 1;
		else
			return (num*factorial(num-1));
}	
	public static void main(String []args){
		Scanner scan = new Scanner(System.in);
		System.out.println("Enter A number");
		int number = scan.nextInt();
		System.out.println("Number = " + number);

		System.out.println("Factorial of " + number + " is " + factorial(number));

		System.out.println("Enter A float");
		float floatNum = scan.nextFloat();
		System.out.println("Enterd Float = " + floatNum);

	}

}
