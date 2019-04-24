package ThreadDemo;

public class ThreadDemo1 {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		System.out.println("Hello World");
		
		//Get the name of thread
		System.out.println(Thread.currentThread().getName());
		//Get the thread id
		System.out.println(Thread.currentThread().getId());
		//Get the current thread information
		System.out.println(Thread.currentThread());
		

	}

}
