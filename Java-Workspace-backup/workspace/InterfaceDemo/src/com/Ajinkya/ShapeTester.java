package com.Ajinkya;

public class ShapeTester {

	
	public static void main(String[] args) {
		System.out.println("Circle");
		Circle c1 = new Circle(5);
		System.out.println("Area = " + c1.calculateArea());
		System.out.println("Perimeter = " + c1.calculatePerimeter());
		
		System.out.println("Rectangle");
		Rectangle r1 = new Rectangle(10,20);
		System.out.println("Area = " + r1.calculateArea());
		System.out.println("Perimeter = " + r1.calculatePerimeter());
		
		System.out.println("****Up cast****");
		/*Parent*///Shape s = new Circle(5)/*Child*/;
		/*double d = s.calculateArea();
		System.out.println(d);
		*/
		
		//Dynamic method dispatch or Late binding or True binding or Runtime binding
		Shape sh = null;
		sh = r1;
		System.out.println("Sh: " + sh.calculateArea());
		sh = c1;
		System.out.println("Sh: " + sh.calculateArea());
		
		System.out.println("****Down cast****");
		sh = c1;
		//sh = r1;
		if(sh instanceof Circle){
			Circle c2 = (Circle)sh;
			System.out.println(c2.calculateArea());
		}
		
	}

}
