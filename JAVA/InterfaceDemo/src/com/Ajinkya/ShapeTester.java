package com.Ajinkya;

public class ShapeTester {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		System.out.println("Circle");
		Circle c1 = new Circle(5);
		System.out.println("Area = " + c1.calculateArea());
		System.out.println("Perimeter = " + c1.calculatePerimeter());
		
		System.out.println("Rectangle");
		Rectangle r1 = new Rectangle(10,20);
		System.out.println("Area = " + r1.calculateArea());
		System.out.println("Perimeter = " + r1.calculatePerimeter());
	}

}
