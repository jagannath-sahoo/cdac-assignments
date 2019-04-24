package FileHandling;

import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;

public class DemoFile4BufferWritter {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		File f1 = new File("myFile.txt");
		
		FileWriter fileWriter;
		try {
			fileWriter = new FileWriter(f1);
			BufferedWriter bufferedWriter;
			
			bufferedWriter = new BufferedWriter(fileWriter);//It needs fileWriter
			
			bufferedWriter.write("Hello I'm bufferWriter");
			bufferedWriter.newLine();
			bufferedWriter.write('A');
			bufferedWriter.write(67);
			
			bufferedWriter.flush();
			bufferedWriter.close();
			
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
		
		// TODO Auto-generated method stub

	}

}
