package com.Ajinkya.demo1;

class Student{
	String name;
	int rollNo;
	
	public String getName() {
		return name;
	}
	
	public int getRollNo() {
		return rollNo;
	}
	
}

class DemoA{
	int a;
	int b;
	/**
	 * @param a
	 * @param b
	 */
	public DemoA(int a, int b) {
		super();
		this.a = a;
		this.b = b;
	}
	
	float div() throws ArithmeticException{
		int temp;
		try{
			temp =  a/b;
		}catch (ArithmeticException e) {
			throw e;
			// TODO: handle exception
		}
		
		return temp;
	}
}


public class ExceptionMethod2 {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		
		
		DemoA ob1 = new DemoA(10, 0);
		try{
			System.out.println(ob1.div());
		}catch (ArithmeticException e1) {
			
			System.out.println("Caught Arithmatic Exception");
			//throw e1;
			// TODO: handle exception
		}catch (Exception e) {
			System.out.println("Other Exceptions");
			// TODO: handle exception
		}
		
		/*Student st1 = new Student();
		int [] arr = {10,20,30,40,50};
		st1 = null;
	
		try{
			//System.out.println(st1.getName());
			System.out.println(arr[5]);
		}
		catch (ArithmeticException e) {
			System.out.println("Pointed to Invalid Ref");
		}
		catch (NullPointerException e) {
			System.out.println("Caught Null Pointer Exception");
		}
		catch (Exception e) {
			System.out.println("Caught Exception");
		}*/
		// TODO Auto-generated method stub
		//String st1;// = null;
		//System.out.println(st1);
	}

}
