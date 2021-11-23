package shapes;

public class Rectangle extends Shape{

	int d2;
	
	Rectangle(int val1, int val2){
		super.d1 = val1;	
		this.d2 = val2;
	}
	
	@Override
	public void area() {
		System.out.print("Area of rectangle: " + super.d1 * this.d2);
	}
	
}
