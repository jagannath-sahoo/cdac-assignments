package com.Ajinkya;

public class Circle implements Shape{
	private double radius;
	
	/**
	 * Default
	 */
	public Circle() {
		super();
	}

	/**
	 * @param radius
	 */
	public Circle(double radius) {
		super();
		this.radius = radius;
	}
	
	public double getRadius() {
		return radius;
	}
	
	public void setRadius(double radius) {
		this.radius = radius;
	}
	@Override
	public double calculateArea() {
		System.out.println("Circle Class");
		// TODO Auto-generated method stub
		return (3.141*radius*radius);
	}
	@Override
	public double calculatePerimeter() {
		System.out.println("Circle Class");
		// TODO Auto-generated method stub
		return (2*3.141*radius);
	}

	@Override
	public String toString() {
		return "Circle [radius=" + radius + "]";
	}
	
}
