package FileHandling;

import java.io.File;
import java.io.FileWriter;
import java.io.IOException;

public class DemoFileWriter {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		
		File f1 = new File("myFile.txt");
		
		FileWriter fileWriter;
		try {
			fileWriter = new FileWriter(f1);
			fileWriter.write("ABCDEF");
			fileWriter.write('\n');
			fileWriter.write('A');
			fileWriter.write('\n');
			fileWriter.write(97);
			fileWriter.write('\n');
			fileWriter.flush();//Flushing the contents of FileWriter to the file
			fileWriter.close();//Close the file
			
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
	}

}
