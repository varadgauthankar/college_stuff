package shapes;

public class Circle implements Shape{
	int d1;
	
	Circle(int val1){
		this.d1 = val1;
	}

	@Override
	public void area() {
		System.out.print("Area of circle: " + pi * (this.d1 * this.d1));
		
	}

}
