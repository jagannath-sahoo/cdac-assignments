package in.cdac.Ajinkya;

public class Demo {

	public static void main(String[] args) {
		float [] marks = {100,200,300,400,500}; 
		Student s1 = new Student("Jagannath Sahoo", 33, marks);
		System.out.println("*****s1*****");
		System.out.println("Name: " + s1.getName());
		System.out.println("Roll Number: " + s1.getRollNo());
		System.out.println("Marks 1: " + s1.getMarks()[0]);
		System.out.println("Marks 2: " + s1.getMarks()[1]);
		System.out.println("Marks 3: " + s1.getMarks()[2]);
		System.out.println("Marks 4: " + s1.getMarks()[3]);
		System.out.println("Marks 5: " + s1.getMarks()[4]);
		
		System.out.println("*****s2*****");
		Student s2 = new Student("Ajinkya");
		System.out.println("Name :"+ s2.getName());
		System.out.println("Roll no:" + s2.getRollNo());
		//System.out.println("Marks :"+ s2.getMarks()[0]);
		float [] ma = {10,20,30,40,50};
		s2.setMarks(ma);
		System.out.println("Marks 1: " + s2.getMarks()[0]);
		System.out.println("Marks 2: " + s2.getMarks()[1]);
		System.out.println("Marks 3: " + s2.getMarks()[2]);
		System.out.println("Marks 4: " + s2.getMarks()[3]);
		System.out.println("Marks 5: " + s2.getMarks()[4]);
		// TODO Auto-generated method stub
		System.out.println("*****s3*****");
		Student s3 = new Student(s2);
		System.out.println("Name: " + s3.getName());
		System.out.println("Roll Number: " + s3.getRollNo());
		System.out.println("Marks 1: " + s3.getMarks()[0]);
		System.out.println("Marks 2: " + s3.getMarks()[1]);
		System.out.println("Marks 3: " + s3.getMarks()[2]);
		System.out.println("Marks 4: " + s3.getMarks()[3]);
		System.out.println("Marks 5: " + s3.getMarks()[4]);

	}

}
