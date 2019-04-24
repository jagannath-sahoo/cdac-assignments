package FileHandling;

import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;

public class DemoFile3FileReader {
	

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		File f1 = new File("myFile.txt");
		FileReader fileReader;
		try {
			fileReader = new FileReader(f1);
			
			int ch = fileReader.read();//Read ASCII value
			while(ch != -1){
				System.out.print((char)ch);
				ch = fileReader.read();//Read the next char from file
				//read() return -1 if no char is available to read
				//Read returns char from file
			}
		} catch (FileNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}

}
