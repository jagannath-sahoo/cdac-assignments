package FileHandling;

import java.io.File;
import java.io.IOException;

public class FileHandlingDemo1 {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		//Create file 
		File f1 =  new File("myFile.txt");
		System.out.println(f1.exists());
		
		try {
			f1.createNewFile();
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
		//Create a file with specified directory
		File f2 = new File("/home/desd/f1.txt");
		System.out.println(f2.exists());
		try {
			f2.createNewFile();
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		 
		//Make Dir
		File f3 = new File("myDir");
		f3.mkdir();
		//Create file in the myDir
		File f4 = new File("myDir", "f2.txt");
		try {
			f4.createNewFile();
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		/*****************************************************************/
		System.out.println("*********************************");
		File f5 = new File("/");
		String [] list1 = f5.list();
		int fileCount = 0;
		
		for (String temp : list1) {
			System.out.println(temp);
			++fileCount;
		}
		System.out.println("Number of files: " + fileCount);
		// TODO Auto-generated method stub
	}
}
