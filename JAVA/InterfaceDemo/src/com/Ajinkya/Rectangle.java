package com.Ajinkya;

public class Rectangle implements Shape{
	private double length;
	private double width;
	
	/**
	 * 
	 */
	public Rectangle() {
		super();
	}

	/**
	 * @param length
	 * @param width
	 */
	public Rectangle(double length, double width) {
		super();
		this.length = length;
		this.width = width;
	}
	
	public double getLength() {
		return length;
	}

	public void setLength(double length) {
		this.length = length;
	}

	public double getWidth() {
		return width;
	}

	public void setWidth(double width) {
		this.width = width;
	}
	
	@Override
	public double calculateArea() {
		// TODO Auto-generated method stub
		return 0;
	}

	@Override
	public double calculatePerimeter() {
		// TODO Auto-generated method stub
		return 0;
	}

	@Override
	public String toString() {
		return "Rectangle [length=" + length + ", width=" + width + "]";
	}
}
