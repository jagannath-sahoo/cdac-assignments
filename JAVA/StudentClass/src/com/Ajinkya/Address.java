package com.Ajinkya;

public class Address {
	private String location;
	private String City;
	/**
	 * 
	 */
	public Address() {
		super();
	}
	/**
	 * @param location
	 * @param city
	 */
	public Address(String location, String city) {
		super();
		this.location = location;
		City = city;
	}
	public String toString() {
		return "Address [location=" + location + ", City=" + City + "]";
	}
	

}
