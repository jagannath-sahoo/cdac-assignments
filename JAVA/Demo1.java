import java.util.Scanner;

class Student{
	String name;
	int roll;
	float marks;
	void addData(String name, int roll, float marks){
		this.name = name;
	 	this.roll = roll;
		this.marks = marks;
	}
	void getData()
	{
		System.out.println("Name:" + name);
		System.out.println("Roll Number:" + roll);
		System.out.println("Marks secured" + marks);
	}
	static	float sumOfMarks(Student [] arr){
		float sum = 0;
		for(int i = 0; i<arr.length; i++){
			sum = sum + arr[i].marks;
		}
		return sum;
	}
}


public class Demo1{
	public static void main(String [] args){
		Student s1 = new Student();
		Student s2 = new Student();
		s1.addData("Ajinkya",034,100);
		s2.addData("Jagannath",033,500);
		s1.getData();
		s2.getData();

		System.out.println("******************************************");

		
		Student [] StudentArray = new Student[3];
		for(int i=0; i<StudentArray.length; i++){
			StudentArray[i] = new Student();
		}

		Scanner scan = new Scanner(System.in);
		for(int i = 0; i<StudentArray.length; i++){
			System.out.println("******************************************");
			System.out.println("Enter Name, Roll no. and Marks for Student");
			StudentArray[i].addData(scan.next(), scan.nextInt(), scan.nextFloat());
		}
		
		for(int i = 0; i<StudentArray.length; i++){
			System.out.println("Name:Roll number: Marks");
		        StudentArray[i].getData();
		}

		System.out.println("Sum of Student Array Marks" + Student.sumOfMarks(StudentArray));

	}
}

