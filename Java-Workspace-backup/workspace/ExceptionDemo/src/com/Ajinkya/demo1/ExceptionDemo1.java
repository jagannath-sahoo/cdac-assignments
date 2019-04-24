package com.Ajinkya.demo1;

public class ExceptionDemo1 {
	
	public static void main(String args[]){
		int x = 10;
		int res=0;
		//System.out.println("res = " + res);
		try{
			res = 10/0;
		}
		catch(ArithmeticException e)
		{
			System.out.println("Caught Arithmatic Exception");
		}
		System.out.println("res = " + res);
	}
}
