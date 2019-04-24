package com.Ajinkya;

public class Rectangle implements Shape{
	private float length;
	private float width;
	

	public Rectangle() {
		super();
	}

	
	public Rectangle(float length, float width) {
		super();
		this.length = length;
		this.width = width;
	}
	
	public double getLength() {
		return length;
	}

	public void setLength(float length) {
		this.length = length;
	}

	public double getWidth() {
		return width;
	}

	public void setWidth(float width) {
		this.width = width;
	}
	
	@Override
	public double calculateArea() {
		System.out.println("Rectangle Class");
		// TODO Auto-generated method stub
		return (length*width);
	}
	@Override
	public double calculatePerimeter() {
		System.out.println("Rectangle Class");
		return (2*(length+width));
	}

	@Override
	public String toString() {
		return "Rectangle [length=" + length + ", width=" + width + "]";
	}
}
