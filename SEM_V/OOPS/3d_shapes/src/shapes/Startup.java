package shapes;
import java.util.*;

public class Startup {

	public static void main(String[] args) {
		
		int choice = 1;	
		
		Scanner scanner = new Scanner(System.in);
		
		System.out.print("ENTER CHOICE\n 1: CUBE \n 2: CYLINDER\n  ENTER: ");
		
		choice = scanner.nextInt();
		
		Shape shape = new Shape();
		
		switch(choice) {
		case 1:
			shape = new Cube(20);
			break;
			
		case 2:
			shape = new Cylinder(10, 20);
			break;
		}
		
		shape.surface();
		shape.volume();

	}

}
