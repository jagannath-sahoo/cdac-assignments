package com.JN.fee;

public class Primary extends Student{
	private final double quaterlyFee =  8500.0;
	private final double yearlyCharges = 3000.0;
	
	
	/**
	 * 
	 */
	public Primary() {
		super();
		// TODO Auto-generated constructor stub
	}


	/**
	 * @param studentName
	 * @param standard
	 * @param divison
	 */
	public Primary(String studentName, String standard,
			String divison) {
		super(studentName, standard, divison);
		// TODO Auto-generated constructor stub
	}

	

	public String toString() {
		return "Primary [quaterlyFee=" + quaterlyFee + ", yearlyCharges="
				+ yearlyCharges + ", toString()=" + super.toString() + "]";
	}


	public void calculateFees()
	{
		double totalFee;
		totalFee = (quaterlyFee*4) + yearlyCharges;
		System.out.println("Total Fees: " + totalFee);
	}
	
}
