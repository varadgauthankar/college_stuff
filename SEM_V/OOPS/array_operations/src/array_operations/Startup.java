package array_operations;

public class Startup {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
	
		int arrInt[] = {1,2,3,4};

		for(int x : arrInt) {
			System.out.println(x);
		}
		System.out.println();
		
		
		String arrString[];
		arrString = new String[2];
		
		arrString[0] = "v";
		arrString[1] = "r";
		
		for(String x : arrString) {
			System.out.println(x);
		}
		
		System.out.println();
		
		int arr2d[][] = {{1,2},{4,5}};
		
		
		for(int i=0; i<arr2d.length; i++) {
			for (int j=0; i<arr2d[i].length; j++)
			{
				System.out.println(arr2d[i][j]);
			}
	
		}

	}

}
