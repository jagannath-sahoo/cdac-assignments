package ThreadDemo;




class MythreadA extends Thread {
	//Thread class is defined in the java.lang
	@Override
	public void run() {
		// TODO Auto-generated method stub
		super.run();
		
		System.out.println("In ThreadA class");
		System.out.println("*****Worker Thread***** => " + Thread.currentThread());
	}
}

public class ThreadDemo2 {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		
		MythreadA t1 = new MythreadA();//New Thread object is created
		
		MythreadA t2 = new MythreadA();//New 2nd Thread object is created
		
		System.out.println("*****MAIN Thread***** => " + Thread.currentThread());
		/*
		 * Thread[main,5,main]
		 * 5 is the Priority 
		 */
		System.out.println("Main thread priority = " + 
							Thread.currentThread().getPriority());
		t1.start();//run() Method of the class will execute 
		t2.start();//run() Method of the class will execute 
		
		// TODO Auto-generated method stub
		//System.out.println("*****MAIN Thread***** => " + Thread.currentThread());	
	}
}
