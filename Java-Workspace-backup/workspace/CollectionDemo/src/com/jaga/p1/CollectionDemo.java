package com.jaga.p1;

import java.util.ArrayList;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Stack;


class Student{
	String name;
	int rollNo;
	
	public Student() {
		super();
	}
	/**
	 * @param name
	 * @param rollNo
	 */
	public Student(String name, int rollNo) {
		super();
		this.name = name;
		this.rollNo = rollNo;
	}
	@Override
	public String toString() {
		return "Student [name=" + name + ", rollNo=" + rollNo + "]";
	}
	
}


public class CollectionDemo {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		System.out.println("****Hash Set****");
		HashSet<String> hashSet;
		hashSet = new HashSet<String>();
		hashSet.add("Hash AAA");
		hashSet.add("Hash BBB");
		hashSet.add("Hash CCC");
		hashSet.add("Hash AAA");
		hashSet.add("Hash AAA");
		
		for(String temp:hashSet){
			System.out.println(" "+ temp);
		}
		Iterator<String> itr = hashSet.iterator();
		while(itr.hasNext()){
			System.out.println(" " + itr.next());
		}
		
		System.out.println("****************");
		
		/*
		
		System.out.println("*******STACK******");
		
		Stack<String> stack = new Stack<String>();
		
		stack.push("AAA");
		stack.push("BBB");
		stack.push("CCC");
		System.out.println("PUSH");
		for( String temp : stack){
			System.out.println(" " + temp);
		}
		System.out.println("POP");
		Iterator<String> itr = stack.iterator();
		while (itr.hasNext()) {
			System.out.println(" " + itr.next());			
		}
		System.out.println("****************");
		
		*/
		
		Student s1 = new Student("aaa",1);
		//System.out.println(s1);
		
		ArrayList<Student>alStu;
		alStu = new ArrayList<Student>();
		alStu.add(s1);
		alStu.add(new Student("bbb",2));
		alStu.add(new Student("ccc",3));
		
		System.out.println("Size alStu: " + alStu.size());
		
		Iterator<Student> itStud = alStu.iterator();
		while (itStud.hasNext()) {
			System.out.println(itStud.next());
			
		}
		
		System.out.println("********************");
		
		ArrayList <String> a1;
		a1 =  new ArrayList<String>();
		a1.add("aa");
		a1.add("bb");
		a1.add("cc");
		
		for(String temp : a1){
			System.out.println(" " + temp);
		}
		
		//Iterator<String> it;// Initially don't point to any Array
		//it = a1.iterator();
		System.out.println("********************");
		Iterator<String> it = a1.iterator();
		
		while (it.hasNext()) {
			System.out.println(" " + it.next());
		}
		System.out.println(a1.contains("aa"));
		//System.out.println
		//System.out.println(a1.remove("aa"));
		
		// TODO Auto-generated method stub

	}

}
