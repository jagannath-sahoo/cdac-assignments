package ThreadDemo;

//Behind the scene PARALLEL but we have once screen to show the result then its concurrent process

class Table{
	synchronized void printTable(int n){
		//synchronized keyword will make threads synchronized and only one thread can
		//execute this method once 
		System.out.println("****" + "Table = " + n + "****");
		for (int i = 0; i <= 10; i++){
			try {
				Thread.sleep(250);//Require Compile time Try catch
				//But Exception is always run-time
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
			System.out.println("-->" + (n*i));
		}
		//System.out.println("***********************************");
	}
}

class MyThread1 extends Thread{
	@Override
	public void run() {
		// TODO Auto-generated method stub
		super.run();
		System.out.println("****In Thread 1****");
		System.out.println("Thread 1 "+ Thread.currentThread());
		ThreadDemo4.ob1.printTable(3);//This will print the table of 3
	}
}

class MyThread2 extends Thread{
	@Override
	public void run() {
		// TODO Auto-generated method stub
		super.run();
		System.out.println("****In Thread 2****");
		System.out.println("Thread 2 "+ Thread.currentThread());
		ThreadDemo4.ob1.printTable(5);//Print the table of 5
	}
}

public class ThreadDemo4 {

	static Table ob1;
	//ob1 is shared with other thread classes
	// Both the threads refer the same object use printTable()
	/**
	 * @param args
	 */
	public static void main(String[] args) {
		ob1 = new Table(); 
		//Current Thread Information
		System.out.println("***Main() Thread***" + Thread.currentThread());
		
		MyThread1 thread1 = new MyThread1();
		MyThread2 thread2 = new MyThread2();
		
		thread1.start();
		thread2.start();
		
		// TODO Auto-generated method stub

	}

}
