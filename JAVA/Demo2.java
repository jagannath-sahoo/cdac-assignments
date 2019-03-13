import java.util.Scanner;

class Student{
	String name;
	int roll;
	float [] marks;
	{
		marks = new Marks[5];
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

	static	float sumOfMarks(Student [] arr){
		float sum = 0;
		for(int i = 0; i<arr.length; i++){
			sum = sum + arr[i].marks;
		}
		return sum;
	}
}


public class Demo2{

	public static void main(String [] args){
	Student s1 = new Student();
	s1.setName("Jagannath");
	s1.setRollNumber(033);
	s1.setMarks({10;20;30;40;50});
	}
}
