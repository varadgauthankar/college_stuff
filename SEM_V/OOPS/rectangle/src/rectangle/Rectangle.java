package rectangle;
import java.util.Scanner;

public class Rectangle {
	 double length;
	double breadth;
	
	 public void setDim() {
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("Enter Length: ");
		this.length =  scanner.nextDouble();
		
		System.out.println("Enter breadth: ");
		this.breadth =  scanner.nextDouble();
		
		scanner.close();
	}
	
	public double getArea() {
		return length * breadth;
	}
	
	public double getPerimeter() {
		return 2 * (length + breadth);
	}

}
