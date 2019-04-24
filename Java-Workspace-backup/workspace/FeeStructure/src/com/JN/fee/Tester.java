package com.JN.fee;

import java.util.Scanner;
import java.util.ArrayList;

public class Tester {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		
		ArrayList<Student> al = new ArrayList<Student>();
		Scanner scanner = new Scanner(System.in);
		String name,std,div;
		int choice = 10;
		
		do{
			System.out.println("Please select any option");
			System.out.println("1. Add Pre-Primary Student");
			System.out.println("2. Add Primary Student");
			System.out.println("3. Add Higher Secondary Student");
			System.out.println("4. calculate Student fees");
			
			choice = scanner.nextInt();
			
			if(choice == 0)
			{
				System.exit(0);
			}
			
			
			switch (choice) {
			case 1:
				System.out.println("Enter name");
				name = scanner.next();
				System.out.println("Enter Standard");
				std = scanner.next();
				System.out.println("Enter Divison");
				div = scanner.next();
				Preprimary preprimary = new Preprimary(name, std, div);
				System.out.println(preprimary.toString());
				al.add(preprimary);
				//preprimary.calculateFees();
				break;
			
			case 2:
				System.out.println("Enter name");
				name = scanner.next();
				System.out.println("Enter Standard");
				std = scanner.next();
				System.out.println("Enter Divison");
				div = scanner.next();
				name = div;
				Primary primary = new Primary(name, std, div);
				System.out.println(primary.toString());
				al.add(primary);
				//primary.calculateFees();
				break;

			case 3:
				System.out.println("Enter name");
				name = scanner.next();
				System.out.println("Enter Standard");
				std = scanner.next();
				System.out.println("Enter Divison");
				div = scanner.next();
				HigherSecondary higherSecondary = new HigherSecondary(name, std, div);
				System.out.println(higherSecondary.toString());
				al.add(higherSecondary);
				//higherSecondary.calculateFees();
				break;	
			case 4:
				System.out.println("Enter FeeId");
				String searchFeeId = scanner.next();
				for(Student s:al){
					if (searchFeeId.equals(s.getFeeId())){
						s.calculateFees();
					}
					else
					{
						System.out.println("Not Found");
					}
				}
				break;	
			
			default:
				break;
			}
		}while(choice != 0);
		
//		Preprimary pre1 = new Preprimary("Ajinkya", "UKG II", "A");
//		System.out.println(pre1.toString());
//		pre1.calculateFees();
//		
//		Primary pri1 = new Primary("Jerin", "STD 5", "B");
//		System.out.println(pri1.toString());
//		pri1.calculateFees();
//		
//		HigherSecondary hs = new HigherSecondary("Joel", "STD 11", "A");
//		System.out.println(hs.toString());
//		hs.calculateFees();

	}
}
