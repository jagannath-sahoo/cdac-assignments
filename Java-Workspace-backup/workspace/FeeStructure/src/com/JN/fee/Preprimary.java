package com.JN.fee;

public class Preprimary extends Student{
	private final double quaterlyFee =  6000.0;
	private final double yearlyCharges = 2000.0;
	
	/**
	 * 
	 */
	public Preprimary() {
		super();
		// TODO Auto-generated constructor stub
	}

	/**
	 * @param feeId
	 * @param studentName
	 * @param standard
	 * @param divison
	 */
	public Preprimary(String studentName, String standard,
			String divison) {
		super(studentName, standard, divison);
		// TODO Auto-generated constructor stub
	}

	
	
	public String toString() {
		return "Preprimary [quaterlyFee=" + quaterlyFee + ", yearlyCharges="
				+ yearlyCharges + ", toString()=" + super.toString() + "]";
	}

	public void calculateFees()
	{
		double totalFee = (quaterlyFee*4) + yearlyCharges;
		System.out.println("Yearly Fees: " + totalFee);
	}

}
