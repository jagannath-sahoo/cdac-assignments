package FileHandling;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;

public class DemoFIle5BufferedReader {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		File f1 = new File("myFile.txt");
		
		FileReader fileReader;
		try {
			fileReader = new FileReader(f1);//We can specify the file name in place of f1 as well
			BufferedReader bufferedReader = new BufferedReader(fileReader);
			
			String str = bufferedReader.readLine();
			while(str != null)
			{
				System.out.println(str);
				str = bufferedReader.readLine();
			}
			
		} catch (FileNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
		// TODO Auto-generated method stub

	}

}
