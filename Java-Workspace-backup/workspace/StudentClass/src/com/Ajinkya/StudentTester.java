package com.Ajinkya;

import java.util.Scanner;

public class StudentTester {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		
		Student std1 = new Student("JAGAN","033","DESD","Panchavati","Pune");
		System.out.println(std1);
		Scanner sc =new Scanner(System.in);
		System.out.println("Enter Data In Specific Formate");
		System.out.println("Name:ID:Course:Location:City");
		Student std2 = new Student(sc.next(), sc.next(),sc.next(), sc.next(),sc.next());
		System.out.println(std2);
		// TODO Auto-generated method stub

	}

}
