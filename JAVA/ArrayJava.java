public class ArrayJava{
	public static void main(String []args){
		int [] arr1 = {10,20,30,40,50};
		for(int i = 0; i<arr1.length;i++){
			System.out.println(" "+arr1[i]);
		}
		int [] arr2;
		arr2 = new int[5]; 
		arr2[0] = 100;
		arr2[1] = 200;

		System.out.println("arr2[0] = " + arr2[0] + "\narr2[1] = " + arr2[1]);
	}
}
