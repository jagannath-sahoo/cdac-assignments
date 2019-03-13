import java.util.Scanner;

class Student{
	String name;
	int roll;
	float [] marks;
	{
		marks = new float[5];
	}
	void setName(String name){
		this.name = name;
	}
	void setRollNumber(int roll){
		this.roll = roll;
	}
	void setMarks(float [] marks){
		for(int i = 0; i<marks.length; i++){
			this.marks[i] = marks[i];
		}
	}

	void getData()
	{
		System.out.println("Name:" + name);
		System.out.println("Roll Number:" + roll);
		System.out.println("Marks secured" + marks);
	}

	String getName(){return name;}
	int getRollNumber(){return roll;}
	float [] getMarks(){ return marks;}

	static	float sumOfMarks(Student std){
		float sum = 0;
		for(int i = 0; i<std.marks.length; i++){
			sum = sum + std.marks[i];
		}
		return sum;
	}
}


public class Demo2{

	public static void main(String [] args){
	Student s1 = new Student();
	float [] m = {10,20,30,40,50};

	s1.setName("Jagannath");
	s1.setRollNumber(033);
	s1.setMarks(m);
	System.out.println("****************************");
	System.out.println("Name: " + s1.getName());
	System.out.println("Roll number: " + s1.getRollNumber());
	for(int i = 0; i < s1.getMarks().length ; i++)
	{		
		System.out.println("Mark" + (i+1) + ": " + s1.getMarks()[i]);
	}
	System.out.println("Sum of marks" + Student.sumOfMarks(s1));
	}
}
