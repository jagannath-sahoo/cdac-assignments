package com.Jagannath.in;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Iterator;


class Student{
	private String Name;
	private Integer rollNumber;
	public Student(String name, Integer rollNumber) {
		super();
		Name = name;
		this.rollNumber = rollNumber;
	}
	public String getName() {
		return Name;
	}
	public void setName(String name) {
		Name = name;
	}
	public Integer getRollNumber() {
		return rollNumber;
	}
	public void setRollNumber(Integer rollNumber) {
		this.rollNumber = rollNumber;
	}
	@Override
	public String toString() {
		return "Student [Name=" + Name + ", rollNumber=" + rollNumber + "]";
	}
}

class SortByRoll implements Comparator<Student>{
	@Override
	public int compare(Student o1, Student o2) {
		// TODO Auto-generated method stub
		return o1.getRollNumber() - o2.getRollNumber();
	}
}

class SortbyName implements Comparator<Student>{
	@Override
	public int compare(Student o1, Student o2) {
		// TODO Auto-generated method stub
		return o1.getName().compareTo(o2.getName());
	}
}

public class SortingDemo {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		/**/
		ArrayList<Student> arrayList = new ArrayList<Student>();
		arrayList.add(new Student("SDA", 723));
		arrayList.add(new Student("MOS", 321));
		arrayList.add(new Student("JHS", 535));
		
		Iterator<Student> iterator = arrayList.iterator();
		System.out.println("***Unsorted***");
		while(iterator.hasNext()) {
			System.out.println(iterator.next().toString());
		}
		
		Collections.sort(arrayList,new SortByRoll());
		System.out.println("***SortedByRoll***");
		iterator = arrayList.iterator();
		while(iterator.hasNext()) {
			System.out.println(iterator.next().toString());
		}
		
		Collections.sort(arrayList,new SortbyName());
		System.out.println("***SortedByName***");
		iterator = arrayList.iterator();
		while(iterator.hasNext()) {
			System.out.println(iterator.next().toString());
		}
	}

}
