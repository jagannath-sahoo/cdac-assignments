package in.cdac.Ajinkya;


public class Student {
	
	private String name;
	private int rollNo;
	private float [] marks;
	
	
	public Student(String name) {
		super();
		this.name = name;
	}
	
	/**
	 * @param object a
	 */
	public Student (Student a){
		this.name = a.name;
		this.rollNo = a.rollNo;
		this.marks = a.marks;
	}
	/**
	 * @param name
	 * @param rollNomarks
	 * @param marks
	 */
	public Student(String name, int rollNo, float[] marks) {
		super();
		this.name = name;
		this.rollNo = rollNo;
		this.marks = marks;
	}	

	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public int getRollNo() {
		return rollNo;
	}
	public void setRollNo(int rollNo) {
		this.rollNo = rollNo;
	}
	public float[] getMarks() {
		return marks;
	}
	public void setMarks(float[] marks) {
		this.marks = marks;
	}
	
}
