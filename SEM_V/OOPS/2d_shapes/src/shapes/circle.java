package shapes;

public class circle extends shape{
	int d2;
	
	circle(int val1){
		super(val1);
	}
	
	public void area() {
		System.out.print("Area of circle: " + 3.14 * (d1 * d1));
	}
}
