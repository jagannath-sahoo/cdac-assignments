package com.JN.fee;

public class HigherSecondary extends Student{
	private final double quaterlyFee =  9000.0;
	private final double yearlyCharges = 4000.0;
	private final double labFee = 3000.0;
	
	
	
	/**
	 * 
	 */
	public HigherSecondary() {
		super();
		// TODO Auto-generated constructor stub
	}


	/**
	 * @param studentName
	 * @param standard
	 * @param divison
	 */
	public HigherSecondary(String studentName, String standard,
			String divison) {
		super(studentName, standard, divison);
		// TODO Auto-generated constructor stub
	}


	public String toString() {
		return "HigherSecondary [quaterlyFee=" + quaterlyFee
				+ ", yearlyCharges=" + yearlyCharges + ", labFee=" + labFee
				+ ", toString()=" + super.toString() + "]";
	}


	public void calculateFees()
	{
		double totalFee;
		totalFee = (quaterlyFee*4) + yearlyCharges + labFee;
		System.out.println("Total Fees: " + totalFee);
	}
}
