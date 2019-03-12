public class Hello{
	static void fun1(){
		int x=10;
		int y=20;
		System.out.println("In Function 1");
		System.out.println("X="+x+"Y="+y);
	
	}
	
	static int factorial(int num){
                int fact = 1;
                if(num > 1)
                {
                        fact = num * factorial(num-1);
                }
                else
                {
                        return 1;
                }
        }


	public static void main(String [] args){
		System.out.println("Jagannath");
		fun1();
		System.out.println("Factorial of" + "5" + factorial(5));

	
	}

}
