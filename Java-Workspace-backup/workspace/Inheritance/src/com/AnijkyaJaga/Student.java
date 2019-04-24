package com.AnijkyaJaga;

public class Student extends Person{
	
	private String id;
	private String course;
	
	/**
	 * 
	 */
	public Student() {
		super();
	}
	
	/**
	 * @param id
	 * @param course
	 */
	public Student(String name, String addr, String aadhar, String id, String course) {
		super(name,addr,aadhar);
		this.id = id;
		this.course = course;
	}
	
	public String toString() {
		return super.toString() + "\r\n" +"Student [id=" + id + ", course=" + course + "]";
	}
	
	
	public static void main(String[] args) {
		Student student1 = new Student("Ajinkya","UK","0987123445670986","034","DESD");
		System.out.println(student1.toString());
		
		Student student2 = new Student("Rahul Mane","Ger","675876789669","043","IoT");
		System.out.println(student2.toString());
		
		// TODO Auto-generated method stub

	}

}
