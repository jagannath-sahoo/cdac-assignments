package com.AnijkyaJaga;

public class Person {
	private String name;
	private String address;
	private String aadhar;
	/**
	 * Default class constructor
	 */
	public Person() {
		super();
	}

	/**
	 * @param name
	 * @param address
	 * @param aadhar
	 */
	public Person(String name, String address, String aadhar) {
		super();
		this.name = name;
		this.address = address;
		this.aadhar = aadhar;
	}

	public String toString() {
		return "Person [name=" + name + ", address=" + address + ", aadhar="
				+ aadhar + "]";
	}
	
}
