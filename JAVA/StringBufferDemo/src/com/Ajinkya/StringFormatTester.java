package com.Ajinkya;

import java.util.Scanner;
import java.util.regex.Matcher;


public class StringFormatTester {
	
	public static boolean isValidEmail(String email)
	{
		boolean valid = false;
		String EMAIL_REGEX = "^[\\w-_\\.+]*[\\w-_\\.]\\@([\\w]+\\.)+[\\w]+[\\w]$";
	    valid = email.matches(EMAIL_REGEX);
		return valid;
	}
	
	public static StringBuffer stringFormat(StringBuffer number)
	{	
		if(number.charAt(3) != '-') {number.insert(3, "-");}
		if(number.charAt(7) != '-') {number.insert(7, "-");}
		
		//number.insert(12, "-");
		StringBuffer temp = new StringBuffer(number.substring(0, 3));
		System.out.println(temp);
		if(!(temp.equals("+91-"))){
			number.insert(0, "+91-");
		}
		//number.reverse();
		
		//System.out.println("Debug " + number.charAt(4));
		//System.out.println(number);
		return number;
	}
	
	public static boolean isNumber(String n)
	{
		boolean valid = false;
		System.out.println(Integer.parseInt(n));
		return valid;
	}
	
	public static void main(String[] args) {
		
		/*System.out.println("Enter your phone Number");
		Scanner scan = new Scanner(System.in);
		StringBuffer strPhn = new StringBuffer();
		strPhn.append("+91-943-9231141");
		//strPhn.append(scan.nextLine());
		//System.out.println(strPhn);
		System.out.println(stringFormat(strPhn));
		*/
		System.out.println(isValidEmail("jagnnath23sahoo@gmail.com"));
	}

}
