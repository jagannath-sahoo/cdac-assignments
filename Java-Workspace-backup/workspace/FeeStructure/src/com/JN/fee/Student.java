package com.JN.fee;

public  abstract class Student{
	private String feeId;
	private String studentName;
	private String standard;
	private String divison;
	
	private static int counter = 1;
	/**
	 * 
	 */
	public Student() {
		super();
	}

	/**
	 * @param studentName
	 * @param standard
	 * @param divison
	 */
	public Student(String studentName, String standard,
			String divison) {
		super();
		this.feeId = "" + counter++;
		this.studentName = studentName;
		this.standard = standard;
		this.divison = divison;
	}

	public String toString() {
		return "Student [feeId=" + feeId + ", studentName=" + studentName
				+ ", standard=" + standard + ", divison=" + divison + "]";
	}
	
	public String getFeeId() {
		return feeId;
	}



	public abstract void calculateFees();
}
