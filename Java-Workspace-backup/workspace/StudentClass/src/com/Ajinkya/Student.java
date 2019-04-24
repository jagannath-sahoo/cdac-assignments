
package com.Ajinkya;

public class Student extends Address {
	private String name;
	private String id;
	private String course;
	/**
	 * 
	 */
	public Student() {
		super();
	}
	
	/**
	 * @param name
	 * @param id
	 * @param course
	 */
	public Student(String name, String id, String course,String location, String city) {
		super(location, city);
		this.name = name;
		this.id = id;
		this.course = course;
	}
	
	
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public String getId() {
		return id;
	}
	public void setId(String id) {
		this.id = id;
	}
	public String getCourse() {
		return course;
	}
	public void setCourse(String course) {
		this.course = course;
	}
	public String toString() {
		return "Student [name=" + name + ", id=" + id + ", course=" + course
				+ "]"+ "\r\n"+super.toString();
	}
	

}
