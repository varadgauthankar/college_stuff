package teacher;

public class startup {

	public static void main(String[] args) {
		
		student vaibhav = new student("vaibhav", "Bicholim", "1212121212", "19s123");
		
		teacher varad = new teacher("varad", "Panjim", "8888175501", 550000);
		
		vaibhav.display();
		System.out.println();
		varad.display();

	}

}
