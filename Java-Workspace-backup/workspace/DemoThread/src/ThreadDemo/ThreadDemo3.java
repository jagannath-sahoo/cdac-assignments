package ThreadDemo;


class MyThreadB implements Runnable{
	@Override
	public void run() {
		// TODO Auto-generated method stub
		System.out.println("In MyThreadB =>" + Thread.currentThread());
	}

	public void start() {
		run();
		// TODO Auto-generated method stub
		
	}
}

public class ThreadDemo3 {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		System.out.println(Thread.currentThread());
		
		MyThreadB t1 = new MyThreadB();
		
		t1.start();
		// TODO Auto-generated method stub

	}

}
