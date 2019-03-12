import java.util.Scanner;

public class Factorial2{
		static int fact(int num){
		int f=1;
		while(num!=0){
		//temp = temp % 10;
		f=f * (num % 10);
		num = num/10;
		}
		return f;
		}
	public static void main (String  []argc){
		Scanner scan = new Scanner(System.in);
		System.out.println("Enter A number");
		int num=scan.nextInt();
	
		System.out.println("Factorial of number"+num+"is"+fact(num));
	
	}

	}
